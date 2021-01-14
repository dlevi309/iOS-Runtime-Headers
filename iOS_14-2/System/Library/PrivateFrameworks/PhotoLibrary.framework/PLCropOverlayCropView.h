/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)dealloc;
-(void)_updateCropRectIfNeeded;
-(void)_removeCropViews;
@end

