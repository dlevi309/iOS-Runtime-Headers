/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextView, NSAttributedString;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {

	UITextView* _bodyTextView;
	NSAttributedString* _body;

}

@property (nonatomic,copy) NSAttributedString * body;              //@synthesize body=_body - In the implementation block
-(void)setBody:(NSAttributedString *)arg1 ;
-(NSAttributedString *)body;
-(void)_setUpConstraints;
-(void)_addSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setUpViews;
@end

