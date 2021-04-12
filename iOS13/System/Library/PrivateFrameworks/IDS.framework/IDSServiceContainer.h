/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;               //@synthesize listeners=_listeners - In the implementation block
-(IDSServiceMonitor *)monitor;
-(NSMutableSet *)listeners;
-(id)initWithService:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
@end

