/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroupItem.h>

@class NSMutableArray, NSArray;

@interface CNCardActionGroupItem : CNCardGroupItem {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupItemWithAction:(id)arg1 ;
+(id)actionGroupItemWithActions:(id)arg1 ;
-(id)init;
-(NSArray *)actions;
-(id)initWithAction:(id)arg1 ;
-(Class)cellClass;
-(void)addAction:(id)arg1 ;
@end

