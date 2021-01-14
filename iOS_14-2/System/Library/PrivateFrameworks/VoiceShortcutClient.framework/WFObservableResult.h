/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@protocol OS_dispatch_queue;
#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
@class NSObject, NSHashTable;

@interface WFObservableResult : NSObject {

	BOOL _observingDistributedNotifications;
	Class _valueType;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _observerNotificationQueue;
	NSHashTable* _observers;
	CGSize _glyphSize;

}

@property (nonatomic,readonly) Class valueType;                                                     //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) CGSize glyphSize;                                                    //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                            //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerNotificationQueue;              //@synthesize observerNotificationQueue=_observerNotificationQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                             //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL observingDistributedNotifications;                                //@synthesize observingDistributedNotifications=_observingDistributedNotifications - In the implementation block
+(void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg1 glyphSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(Class)valueType;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(CGSize)glyphSize;
-(void)stopConnection;
-(void)handleChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerNotificationQueue;
-(id)initWithValueType:(Class)arg1 glyphSize:(CGSize)arg2 ;
-(void)addResultObserver:(id)arg1 ;
-(void)removeResultObserver:(id)arg1 ;
-(void)startConnectionIfNecessary;
-(void)databaseDidChange:(id)arg1 ;
-(BOOL)observingDistributedNotifications;
-(void)setObservingDistributedNotifications:(BOOL)arg1 ;
-(void)dealloc;
@end

