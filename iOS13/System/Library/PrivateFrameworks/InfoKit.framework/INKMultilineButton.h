/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <InfoKit/InfoKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface INKMultilineButton : UIButton {

	NSLayoutConstraint* _labelWidthConstraint;
	NSLayoutConstraint* _labelTopConstraint;
	NSLayoutConstraint* _labelBottomConstraint;
	BOOL _needToInvalidateTitleLableIntrinsicContentSize;
	NSLayoutConstraint* _fm_workaround_height_constraint;

}

@property (nonatomic,retain) NSLayoutConstraint * fm_workaround_height_constraint;              //@synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint - In the implementation block
@property (assign,nonatomic) BOOL needToInvalidateTitleLableIntrinsicContentSize;               //@synthesize needToInvalidateTitleLableIntrinsicContentSize=_needToInvalidateTitleLableIntrinsicContentSize - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSLayoutConstraint *)fm_workaround_height_constraint;
-(void)setFm_workaround_height_constraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)needToInvalidateTitleLableIntrinsicContentSize;
-(void)setNeedToInvalidateTitleLableIntrinsicContentSize:(BOOL)arg1 ;
@end

