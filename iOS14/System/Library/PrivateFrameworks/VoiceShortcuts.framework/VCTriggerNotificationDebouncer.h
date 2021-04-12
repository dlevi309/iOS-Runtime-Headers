/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCTriggerNotificationDebouncerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCTriggerNotificationDebouncer : NSObject {

	id<VCTriggerNotificationDebouncerDelegate> _delegate;
	NSMutableDictionary* _notificationItemTable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * notificationItemTable;                           //@synthesize notificationItemTable=_notificationItemTable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<VCTriggerNotificationDebouncerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VCTriggerNotificationDebouncerDelegate>)delegate;
-(void)setDelegate:(id<VCTriggerNotificationDebouncerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addEventsWithIdentifiers:(id)arg1 configuredTrigger:(id)arg2 workflowReference:(id)arg3 ;
-(void)debouncerDidFire:(id)arg1 ;
-(NSMutableDictionary *)notificationItemTable;
@end

