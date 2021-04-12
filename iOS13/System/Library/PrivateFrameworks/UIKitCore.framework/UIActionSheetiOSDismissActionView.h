/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAlertControlleriOSActionSheetCancelBackgroundView.h>
#import <UIKit/UIActionSheetPresentationControllerDismissActionView.h>

@class NSString, UIButton;

@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView> {

	BOOL _usesShortCompactVerticalLayout;
	UIButton* _dismissButton;

}

@property (nonatomic,retain) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) BOOL usesShortCompactVerticalLayout;              //@synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUsesShortCompactVerticalLayout:(BOOL)arg1 ;
-(BOOL)usesShortCompactVerticalLayout;
-(id)initWithContinuousCornerRadius:(double)arg1 ;
-(void)_setupDismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(double)_heightForTraitCollection:(id)arg1 ;
@end

