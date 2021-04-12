/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/

#import <TipsUI/TipsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface TPSMultilineButton : UIButton {

	NSLayoutConstraint* _labelWidthConstraint;
	NSLayoutConstraint* _labelTopConstraint;
	NSLayoutConstraint* _labelBottomConstraint;
	BOOL _needToInvalidateTitleLableIntrinsicContentSize;
	NSLayoutConstraint* _fm_workaround_height_constraint;

}

@property (nonatomic,retain) NSLayoutConstraint * fm_workaround_height_constraint;              //@synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint - In the implementation block
@property (assign,nonatomic) BOOL needToInvalidateTitleLableIntrinsicContentSize;               //@synthesize needToInvalidateTitleLableIntrinsicContentSize=_needToInvalidateTitleLableIntrinsicContentSize - In the implementation block
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSLayoutConstraint *)fm_workaround_height_constraint;
-(void)setFm_workaround_height_constraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)needToInvalidateTitleLableIntrinsicContentSize;
-(void)setNeedToInvalidateTitleLableIntrinsicContentSize:(BOOL)arg1 ;
@end

