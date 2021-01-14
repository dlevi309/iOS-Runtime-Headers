/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@protocol OS_dispatch_queue;
@class EKEventStore, NSMutableSet, NSObject, NSMutableDictionary;

@interface CUIKEditingManager : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _editingContextGroups;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _changeHistory;
	NSMutableDictionary* _changedObjectMap;

}

@property (__weak) EKEventStore * eventStore;                           //@synthesize eventStore=_eventStore - In the implementation block
@property (retain) NSMutableSet * editingContextGroups;                 //@synthesize editingContextGroups=_editingContextGroups - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableDictionary * changeHistory;                 //@synthesize changeHistory=_changeHistory - In the implementation block
@property (retain) NSMutableDictionary * changedObjectMap;              //@synthesize changedObjectMap=_changedObjectMap - In the implementation block
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(NSMutableDictionary *)changeHistory;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)editingContextGroups;
-(void)setEditingContextGroups:(NSMutableSet *)arg1 ;
-(void)setChangeHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changedObjectMap;
-(void)setChangedObjectMap:(NSMutableDictionary *)arg1 ;
@end

