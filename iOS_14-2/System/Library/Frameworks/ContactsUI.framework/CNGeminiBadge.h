/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNLabeledBadge *)labeledBadge;
-(NSDictionary *)viewAttributes;
-(void)setViewAttributes:(NSDictionary *)arg1 ;
-(void)setLabeledBadge:(CNLabeledBadge *)arg1 ;
@end

