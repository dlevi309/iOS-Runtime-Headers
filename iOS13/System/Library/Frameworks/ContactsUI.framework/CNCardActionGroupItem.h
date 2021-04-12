/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)addAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(NSArray *)actions;
-(Class)cellClass;
@end

