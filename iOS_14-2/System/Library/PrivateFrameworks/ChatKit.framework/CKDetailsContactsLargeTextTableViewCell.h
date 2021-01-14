/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSLayoutConstraint;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell {

	NSLayoutConstraint* _buttonsTopConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * buttonsTopConstraint;              //@synthesize buttonsTopConstraint=_buttonsTopConstraint - In the implementation block
+(double)estimatedHeight;
+(double)preferredHeight;
-(void)configureWithViewModel:(id)arg1 ;
-(void)_updateVisibleButtons;
-(void)_hideAllButtons;
-(void)_initConstraints;
-(NSLayoutConstraint *)buttonsTopConstraint;
-(void)setButtonsTopConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

