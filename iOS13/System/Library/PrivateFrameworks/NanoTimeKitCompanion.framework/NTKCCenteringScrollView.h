/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, NSString;

@interface NTKCCenteringScrollView : UIScrollView <UIScrollViewDelegate> {

	CGRect _originalCrop;
	UIView* _centeredView;
	double _maximumZoomRatio;
	CGSize _minimumDisplaySize;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIView * centeredView;                  //@synthesize centeredView=_centeredView - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                        //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) CGSize minimumDisplaySize;              //@synthesize minimumDisplaySize=_minimumDisplaySize - In the implementation block
@property (assign,nonatomic) double maximumZoomRatio;                //@synthesize maximumZoomRatio=_maximumZoomRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)_updateInsets;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(UIView *)centeredView;
-(void)setCenteredView:(UIView *)arg1 ;
-(void)setMaximumZoomRatio:(double)arg1 ;
-(void)setMinimumDisplaySize:(CGSize)arg1 ;
-(void)_updateZoomScales;
-(void)_centerOnCrop;
-(void)_updateCrop;
-(CGSize)minimumDisplaySize;
-(double)maximumZoomRatio;
@end

