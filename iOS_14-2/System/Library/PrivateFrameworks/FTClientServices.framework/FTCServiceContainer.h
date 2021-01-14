/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
*/


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(BOOL)addListenerID:(id)arg1 ;
-(NSMutableSet *)listeners;
-(FTCServiceMonitor *)monitor;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)dealloc;
@end

