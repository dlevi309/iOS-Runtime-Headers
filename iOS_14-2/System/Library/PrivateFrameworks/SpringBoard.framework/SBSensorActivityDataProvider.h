/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFSensorActivityDataProvider.h>

@class NSSet, NSMutableArray, STMediaStatusDomain, NSMutableSet, SBSensorActivityAttribution, NSString;

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider> {

	NSSet* _activeSensorActivityAttributions;
	NSMutableArray* _recentSensorActivityAttributions;
	NSMutableArray* _recentAttributionExpirationTimers;
	STMediaStatusDomain* _mediaDomain;
	NSMutableSet* _observers;

}

@property (nonatomic,copy) NSSet * activeSensorActivityAttributions;                                                //@synthesize activeSensorActivityAttributions=_activeSensorActivityAttributions - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * recentSensorActivityAttributions;                              //@synthesize recentSensorActivityAttributions=_recentSensorActivityAttributions - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * recentAttributionExpirationTimers;                             //@synthesize recentAttributionExpirationTimers=_recentAttributionExpirationTimers - In the implementation block
@property (nonatomic,readonly) STMediaStatusDomain * mediaDomain;                                                   //@synthesize mediaDomain=_mediaDomain - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observers;                                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy,readonly) SBSensorActivityAttribution * mostRecentSensorActivityAttribution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(NSMutableSet *)observers;
-(NSMutableArray *)recentAttributionExpirationTimers;
-(id)init;
-(STMediaStatusDomain *)mediaDomain;
-(void)_notifyObserversOfActivityChange;
-(void)_updateStateForActiveAttributions:(id)arg1 ;
-(NSSet *)activeSensorActivityAttributions;
-(void)_handleMediaDomainData:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSMutableArray *)recentSensorActivityAttributions;
-(id)initWithSystemStatusServer:(id)arg1 ;
-(SBSensorActivityAttribution *)mostRecentSensorActivityAttribution;
-(void)setActiveSensorActivityAttributions:(NSSet *)arg1 ;
@end

