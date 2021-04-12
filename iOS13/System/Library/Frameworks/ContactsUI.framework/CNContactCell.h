/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell {

	NSArray* _constantConstraints;
	NSArray* _variableConstraints;
	CNCardGroupItem* _cardGroupItem;

}

@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) double minCellHeight; 
@property (nonatomic,retain) CNCardGroupItem * cardGroupItem;                           //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) BOOL showSeparator; 
@property (nonatomic,readonly) BOOL hasGapBetweenSeparatorAndTrailingEdge; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(NSArray *)constantConstraints;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)performDefaultAction;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(BOOL)hasGapBetweenSeparatorAndTrailingEdge;
-(CNCardGroupItem *)cardGroupItem;
@end

