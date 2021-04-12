/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PLCropOverlayCropView : UIView {

	CGRect _cropRect;
	UIView* _aboveCropView;
	UIView* _cropRectView;
	UIView* _belowCropView;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)_updateCropRectIfNeeded;
-(void)_removeCropViews;
@end

