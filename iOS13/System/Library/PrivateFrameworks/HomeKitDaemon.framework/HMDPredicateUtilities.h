/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDPredicateUtilities : HMFObject <HMFLogging> {

	unsigned long long _cameraSignificantEvent;
	HMDHome* _home;
	NSString* _logString;

}

@property (assign) unsigned long long cameraSignificantEvent;              //@synthesize cameraSignificantEvent=_cameraSignificantEvent - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home;                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * logString;                       //@synthesize logString=_logString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHome *)home;
-(id)sunrise;
-(id)sunset;
-(id)logIdentifier;
-(NSString *)logString;
-(BOOL)containsPresenceEvents:(id)arg1 ;
-(id)initWithHome:(id)arg1 logIdentifier:(id)arg2 ;
-(id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4 ;
-(id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2 ;
-(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
-(id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(BOOL*)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6 ;
-(id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(BOOL*)arg3 ;
-(id)rewritePredicateForClient:(id)arg1 ;
-(id)metricFor:(id)arg1 ;
-(id)rewriteNowAdjustedForHomeTimeZone:(id)arg1 ;
-(id)rewritePredicate:(id)arg1 forDaemon:(BOOL)arg2 message:(id)arg3 ;
-(void)fillMetric:(id)arg1 forPredicate:(id)arg2 ;
-(id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3 ;
-(id)addDeltaToNow:(id)arg1 ;
-(id)dateTodayMatchingComponents:(id)arg1 ;
-(unsigned long long)cameraSignificantEvent;
-(void)setCameraSignificantEvent:(unsigned long long)arg1 ;
@end

