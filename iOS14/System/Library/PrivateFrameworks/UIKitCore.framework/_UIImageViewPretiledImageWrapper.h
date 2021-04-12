/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {

	UIImage* _pretiledImage;
	_UIImageViewPretiledImageCacheKey* _cacheKey;

}

@property (nonatomic,readonly) UIImage * pretiledImage;              //@synthesize pretiledImage=_pretiledImage - In the implementation block
+(id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(UIImage *)pretiledImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

