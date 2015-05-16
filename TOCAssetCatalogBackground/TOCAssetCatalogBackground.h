//
//  TOCAssetCatalogBackground.h
//  TOCAssetCatalogBackground
//
//  Created by Tobias Conradi on 17.05.15.
//  Copyright (c) 2015 Tobias Conradi. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface TOCAssetCatalogBackground : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end