/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;               //@synthesize listeners=_listeners - In the implementation block
-(BOOL)addListenerID:(id)arg1 ;
-(NSMutableSet *)listeners;
-(IDSServiceMonitor *)monitor;
-(BOOL)hasListenerID:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
@end

