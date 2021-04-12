/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIPageControl.h>

@class _UILegibilitySettings, NSMutableArray;

@interface CSPageControl : UIPageControl {

	_UILegibilitySettings* _sbLegibilitySettings;
	NSMutableArray* _legibilityViews;
	unsigned long long _cameraPageIndex;

}

@property (assign,nonatomic) unsigned long long cameraPageIndex;              //@synthesize cameraPageIndex=_cameraPageIndex - In the implementation block
+(CGSize)defaultSize;
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 desiredSize:(CGSize)arg2 ;
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(double)_indicatorSpacing;
-(CGRect)_modernBounds;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(void)setCameraPageIndex:(unsigned long long)arg1 ;
-(void)_updateLegibilityViews;
-(id)_cameraIndicatorImage:(BOOL)arg1 ;
-(id)_pageIndicatorImage:(BOOL)arg1 ;
-(id)_currentPageIndicatorColor;
-(id)_pageIndicatorColor;
-(unsigned long long)cameraPageIndex;
@end

