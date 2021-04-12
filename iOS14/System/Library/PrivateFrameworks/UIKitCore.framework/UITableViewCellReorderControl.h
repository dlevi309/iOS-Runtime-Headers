/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellReorderControl : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;
	double _focalY;
	double _focalHeight;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(id)_imageView;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)shouldTrack;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)_updateImageView;
-(id)grabberImage;
@end

