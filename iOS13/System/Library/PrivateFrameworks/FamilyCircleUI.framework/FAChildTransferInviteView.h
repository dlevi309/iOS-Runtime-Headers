/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FAInviteViewProtocol.h>

@class UILabel, NSString;

@interface FAChildTransferInviteView : UIView <FAInviteViewProtocol> {

	UILabel* _titleLabel;
	UILabel* _primaryLabel;
	UILabel* _detailsLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithInvite:(id)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(id)_labelWithCenteredText:(id)arg1 ;
-(double)_heightForTitle:(id)arg1 width:(double)arg2 ;
@end

