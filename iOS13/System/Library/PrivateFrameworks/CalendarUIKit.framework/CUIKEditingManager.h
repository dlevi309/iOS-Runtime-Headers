/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class EKEventStore, NSMutableSet, NSMutableDictionary;

@interface CUIKEditingManager : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _editingContextGroups;
	NSMutableDictionary* _changeHistory;
	NSMutableDictionary* _changedObjectMap;

}

@property (__weak) EKEventStore * eventStore;                           //@synthesize eventStore=_eventStore - In the implementation block
@property (retain) NSMutableSet * editingContextGroups;                 //@synthesize editingContextGroups=_editingContextGroups - In the implementation block
@property (retain) NSMutableDictionary * changeHistory;                 //@synthesize changeHistory=_changeHistory - In the implementation block
@property (retain) NSMutableDictionary * changedObjectMap;              //@synthesize changedObjectMap=_changedObjectMap - In the implementation block
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(NSMutableDictionary *)changeHistory;
-(NSMutableSet *)editingContextGroups;
-(void)setEditingContextGroups:(NSMutableSet *)arg1 ;
-(void)setChangeHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changedObjectMap;
-(void)setChangedObjectMap:(NSMutableDictionary *)arg1 ;
@end

