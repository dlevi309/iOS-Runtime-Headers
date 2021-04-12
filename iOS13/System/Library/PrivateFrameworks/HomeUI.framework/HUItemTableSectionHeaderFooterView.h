/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HFStringGenerator;
@class HUTappableTextView, NSArray, UILabel;

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView {

	id<HFStringGenerator> _message;
	HUTappableTextView* _messageTextView;
	unsigned long long _type;
	NSArray* _constraints;
	UIEdgeInsets _indentationInset;

}

@property (nonatomic,retain) HUTappableTextView * messageTextView;              //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                             //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> message;                       //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) UIEdgeInsets indentationInset;                     //@synthesize indentationInset=_indentationInset - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
+(BOOL)requiresConstraintBasedLayout;
+(id)defaultAttributesForType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSArray *)constraints;
-(void)prepareForReuse;
-(id<HFStringGenerator>)message;
-(void)setMessage:(id<HFStringGenerator>)arg1 ;
-(void)updateConstraints;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(BOOL)_updateViewContent;
-(HUTappableTextView *)messageTextView;
-(void)setMessageTextView:(HUTappableTextView *)arg1 ;
-(void)setIndentationInset:(UIEdgeInsets)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(UIEdgeInsets)indentationInset;
@end

