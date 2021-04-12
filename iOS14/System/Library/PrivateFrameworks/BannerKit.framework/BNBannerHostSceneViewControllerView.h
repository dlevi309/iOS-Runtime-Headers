/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol BNBannerHostSceneViewControllerViewDelegate;
@interface BNBannerHostSceneViewControllerView : UIView {

	id<BNBannerHostSceneViewControllerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BNBannerHostSceneViewControllerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BNBannerHostSceneViewControllerViewDelegate>)delegate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<BNBannerHostSceneViewControllerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

