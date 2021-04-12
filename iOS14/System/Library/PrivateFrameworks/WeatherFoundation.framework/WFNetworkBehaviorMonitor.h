/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSHashTable;

@interface WFNetworkBehaviorMonitor : NSObject {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)logNetworkEvent:(id)arg1 ;
@end

