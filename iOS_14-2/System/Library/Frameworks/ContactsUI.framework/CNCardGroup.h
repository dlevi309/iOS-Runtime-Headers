/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)actions;
-(NSArray *)actionItems;
-(NSArray *)editingItems;
-(void)addAction:(id)arg1 withTitle:(id)arg2 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 wrapTitle:(BOOL)arg3 ;
-(id)unwrappedTargetForAction:(id)arg1 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 glyphColor:(id)arg4 transportType:(long long)arg5 ;
-(SEL)unwrappedSelectorForAction:(id)arg1 ;
-(void)removeActionWithTitle:(id)arg1 ;
-(id)_loadActionItems;
-(BOOL)useSplitActions;
-(void)setUseSplitActions:(BOOL)arg1 ;
-(BOOL)addSpacerFromPreviousGroup;
-(void)setAddSpacerFromPreviousGroup:(BOOL)arg1 ;
-(NSArray *)displayItems;
-(id)description;
-(id)initWithContact:(id)arg1 ;
-(void)removeAllActions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

