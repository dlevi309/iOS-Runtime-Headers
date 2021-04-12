/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CNIndentableCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell <CNIndentableCell> {

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
+(BOOL)shouldIndentWhileEditing;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(NSArray *)constantConstraints;
-(BOOL)showSeparator;
-(void)performDefaultAction;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(CNCardGroupItem *)cardGroupItem;
-(BOOL)hasGapBetweenSeparatorAndTrailingEdge;
-(NSArray *)variableConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

