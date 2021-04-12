/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying> {

	UIImage* _cachedImage;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearCache;
-(void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForSize:(CGSize)arg1 usingTraitCollection:(id)arg2 ;
-(BOOL)_needsRenderForSize:(CGSize)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
-(id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
@end

