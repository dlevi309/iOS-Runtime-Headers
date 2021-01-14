/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIView.h>

@protocol PUCropAspectViewControllerDelegate;
@class UIButton, NSArray;

@interface PUCropAspectFlipperView : UIView {

	UIButton* _horizontalAspectButton;
	UIButton* _verticalAspectButton;
	NSArray* _layoutConstraints;
	BOOL _enabled;
	id<PUCropAspectViewControllerDelegate> _delegate;
	long long _aspectRatioOrientation;
	long long _layoutOrientation;

}

@property (assign,nonatomic,__weak) id<PUCropAspectViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long aspectRatioOrientation;                                    //@synthesize aspectRatioOrientation=_aspectRatioOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(long long)layoutOrientation;
-(id<PUCropAspectViewControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<PUCropAspectViewControllerDelegate>)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)initWithLayoutOrientation:(long long)arg1 ;
-(void)setAspectRatioOrientation:(long long)arg1 ;
-(void)aspectRatioButtonPressed:(id)arg1 ;
-(long long)aspectRatioOrientation;
@end

