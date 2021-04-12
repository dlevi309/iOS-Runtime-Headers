/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIPageControl.h>

@class _UILegibilitySettings;

@interface CSPageControl : UIPageControl {

	_UILegibilitySettings* _sbLegibilitySettings;
	unsigned long long _cameraPageIndex;

}

@property (assign,nonatomic) unsigned long long cameraPageIndex;              //@synthesize cameraPageIndex=_cameraPageIndex - In the implementation block
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 desiredSize:(CGSize)arg2 ;
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 ;
+(CGSize)defaultSize;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(id)_cameraIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_pageIndicatorColor;
-(void)setCameraPageIndex:(unsigned long long)arg1 ;
-(id)_currentPageIndicatorColor;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_updateForLegibility;
-(unsigned long long)cameraPageIndex;
-(void)_rebuildIndicators;
@end

