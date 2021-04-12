/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying> {

	UIImage* _cachedImage;

}
-(void)clearCache;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForSize:(CGSize)arg1 usingTraitCollection:(id)arg2 ;
-(BOOL)_needsRenderForSize:(CGSize)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
@end

