/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, CNContact, NSString;

@interface CNCardGroup : NSObject <NSCopying> {

	NSMutableArray* _items;
	NSMutableArray* _actions;
	NSArray* _actionItems;
	BOOL _useSplitActions;
	BOOL _addSpacerFromPreviousGroup;
	CNContact* _contact;
	NSString* _title;

}

@property (nonatomic,retain) CNContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionItems; 
@property (nonatomic,readonly) NSArray * displayItems; 
@property (nonatomic,readonly) NSArray * editingItems; 
@property (nonatomic,readonly) NSArray * actions;                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL useSplitActions;                         //@synthesize useSplitActions=_useSplitActions - In the implementation block
@property (assign,nonatomic) BOOL addSpacerFromPreviousGroup;              //@synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup - In the implementation block
+(id)groupForContact:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllActions;
-(NSString *)title;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)actions;
-(NSArray *)displayItems;
-(id)initWithContact:(id)arg1 ;
-(NSArray *)editingItems;
-(NSArray *)actionItems;
-(void)addAction:(id)arg1 withTitle:(id)arg2 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)unwrappedTargetForAction:(id)arg1 ;
-(SEL)unwrappedSelectorForAction:(id)arg1 ;
-(void)removeActionWithTitle:(id)arg1 ;
-(id)_loadActionItems;
-(BOOL)useSplitActions;
-(void)setUseSplitActions:(BOOL)arg1 ;
-(BOOL)addSpacerFromPreviousGroup;
-(void)setAddSpacerFromPreviousGroup:(BOOL)arg1 ;
@end

