/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setSimpleTextLabel:(UILabel *)arg1 ;
-(UILabel *)simpleTextLabel;
-(NSString *)simpleText;
-(void)setSimpleText:(NSString *)arg1 ;
-(NSLayoutConstraint *)leftInsetConstraint;
-(void)setLeftInsetConstraint:(NSLayoutConstraint *)arg1 ;
@end

