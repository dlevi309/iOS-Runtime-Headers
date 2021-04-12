/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKPGSVFooterViewDelegate>)delegate;
-(void)_editTapped:(id)arg1 ;
-(void)setDelegate:(id<PKPGSVFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

