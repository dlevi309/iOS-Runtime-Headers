/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray, NSLayoutConstraint, NSString;

@interface EKUISendInvitationsCell : UITableViewCell {

	UILabel* _simpleTextLabel;
	NSArray* _persistentConstraints;
	NSLayoutConstraint* _leftInsetConstraint;
	NSString* _simpleText;

}

@property (nonatomic,retain) UILabel * simpleTextLabel;                             //@synthesize simpleTextLabel=_simpleTextLabel - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                       //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftInsetConstraint;              //@synthesize leftInsetConstraint=_leftInsetConstraint - In the implementation block
@property (nonatomic,retain) NSString * simpleText;                                 //@synthesize simpleText=_simpleText - In the implementation block
+(id)_simpleTextLabelFont;
-(NSLayoutConstraint *)leftInsetConstraint;
-(void)setLeftInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)simpleText;
-(void)updateConstraints;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)setSimpleTextLabel:(UILabel *)arg1 ;
-(UILabel *)simpleTextLabel;
-(void)setSimpleText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

