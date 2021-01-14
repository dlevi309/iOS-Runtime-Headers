/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {

	BOOL _backgroundsAreSame;
	_UIBarBackgroundAppearanceData* _backgroundData1;
	_UIBarBackgroundAppearanceData* _backgroundData2;

}

@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData1;              //@synthesize backgroundData1=_backgroundData1 - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData2;              //@synthesize backgroundData2=_backgroundData2 - In the implementation block
-(id)bg2Effects;
-(double)bg2Alpha;
-(id)bg1ShadowImage;
-(id)bg1Image;
-(double)bg1ShadowAlpha;
-(double)bg1Alpha;
-(id)bg2Color;
-(id)bg1ShadowColor;
-(id)bg2ShadowTint;
-(id)bg2ShadowImage;
-(id)bg2ShadowColor;
-(id)bg2ShadowEffect;
-(long long)bg1ImageMode;
-(BOOL)bg2HasShadow;
-(BOOL)bg2Enabled;
-(id)bg1Color;
-(double)bg2ShadowAlpha;
-(id)bg1ShadowEffect;
-(id)bg1ShadowTint;
-(long long)bg2ImageMode;
-(BOOL)bg1HasShadow;
-(id)initWithLayout:(id)arg1 ;
-(void)describeInto:(id)arg1 ;
-(BOOL)shouldUseExplicitGeometry;
-(_UIBarBackgroundAppearanceData *)backgroundData2;
-(_UIBarBackgroundAppearanceData *)backgroundData1;
-(id)bg2Image;
-(void)setBackgroundData1:(_UIBarBackgroundAppearanceData *)arg1 ;
-(void)setBackgroundData2:(_UIBarBackgroundAppearanceData *)arg1 ;
-(id)bg1Effects;
@end

