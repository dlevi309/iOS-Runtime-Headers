/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@class CNLabeledBadge, NSDictionary;

@interface CNGeminiBadge : UIView {

	CNLabeledBadge* _labeledBadge;

}

@property (nonatomic,retain) CNLabeledBadge * labeledBadge;              //@synthesize labeledBadge=_labeledBadge - In the implementation block
@property (nonatomic,copy) NSDictionary * viewAttributes; 
+(id)geminiBadgeWithText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(NSDictionary *)viewAttributes;
-(void)setViewAttributes:(NSDictionary *)arg1 ;
-(CNLabeledBadge *)labeledBadge;
-(void)setLabeledBadge:(CNLabeledBadge *)arg1 ;
@end

