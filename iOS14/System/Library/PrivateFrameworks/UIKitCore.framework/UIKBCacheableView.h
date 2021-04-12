/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString;


@protocol UIKBCacheableView <NSObject>
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long assetIdiom; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
@optional
-(void)drawContentsOfRenderers:(id)arg1;
-(long long)cacheDeferPriority;

@required
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1;
-(double)cachedWidth;
-(long long)assetIdiom;

@end

