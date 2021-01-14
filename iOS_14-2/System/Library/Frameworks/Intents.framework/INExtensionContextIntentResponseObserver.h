/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INGetRideStatusIntentResponseObserver.h>
#import <libobjc.A.dylib/INGetCarPowerLevelStatusIntentResponseObserver.h>

@protocol INIntentResponseObserver;
@class NSMapTable, NSString;

@interface INExtensionContextIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver, INGetCarPowerLevelStatusIntentResponseObserver> {

	id<INIntentResponseObserver> _remoteObserver;
	NSMapTable* _remoteObservers;

}

@property (nonatomic,readonly) NSMapTable * remoteObservers;              //@synthesize remoteObservers=_remoteObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)getCarPowerLevelStatusResponseDidUpdate:(id)arg1 ;
-(void)getRideStatusResponseDidUpdate:(id)arg1 ;
-(void)setObserver:(id)arg1 forConnection:(id)arg2 ;
-(void)_intentResponseDidUpdate:(id)arg1 ;
-(NSMapTable *)remoteObservers;
@end

