/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)_setupDismissButton;
-(id)initWithContinuousCornerRadius:(double)arg1 ;
-(double)_heightForTraitCollection:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)dismissButton;
-(NSString *)title;
-(void)setUsesShortCompactVerticalLayout:(BOOL)arg1 ;
-(BOOL)usesShortCompactVerticalLayout;
@end

