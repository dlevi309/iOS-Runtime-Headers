/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPGSVFooterViewDelegate;
@class PKContinuousButton;

@interface PKPGSVFooterView : UIView {

	PKContinuousButton* _editButton;
	id<PKPGSVFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPGSVFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPGSVFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPGSVFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_editTapped:(id)arg1 ;
@end

