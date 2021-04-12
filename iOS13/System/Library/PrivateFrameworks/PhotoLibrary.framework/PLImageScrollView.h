/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIScrollView.h>

@interface PLImageScrollView : UIScrollView {

	BOOL _adjustZoomScaleAfterRotation;

}

@property (assign,nonatomic) BOOL adjustZoomScaleAfterRotation;              //@synthesize adjustZoomScaleAfterRotation=_adjustZoomScaleAfterRotation - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_centerContentIfNecessary;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(BOOL)adjustZoomScaleAfterRotation;
-(void)setAdjustZoomScaleAfterRotation:(BOOL)arg1 ;
@end

