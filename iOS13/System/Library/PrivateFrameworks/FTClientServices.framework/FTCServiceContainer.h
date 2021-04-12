/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
*/


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(void)dealloc;
-(FTCServiceMonitor *)monitor;
-(NSMutableSet *)listeners;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
@end

