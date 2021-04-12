/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDPredicateUtilities : HMFObject <HMFLogging> {

	unsigned long long _cameraSignificantEvent;
	unsigned long long _personFamiliarityOptions;
	HMDHome* _home;
	NSString* _logIdentifier;

}

@property (copy,readonly) NSString * logIdentifier;                          //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (assign) unsigned long long cameraSignificantEvent;                //@synthesize cameraSignificantEvent=_cameraSignificantEvent - In the implementation block
@property (assign) unsigned long long personFamiliarityOptions;              //@synthesize personFamiliarityOptions=_personFamiliarityOptions - In the implementation block
@property (__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)sunset;
-(id)sunrise;
-(NSString *)logIdentifier;
-(BOOL)containsPresenceEvents:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setPersonFamiliarityOptions:(unsigned long long)arg1 ;
-(unsigned long long)personFamiliarityOptions;
-(HMDHome *)home;
-(id)initWithHome:(id)arg1 logIdentifier:(id)arg2 ;
-(id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4 ;
-(id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2 ;
-(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
-(id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(BOOL*)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6 ;
-(id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(BOOL*)arg3 ;
-(id)rewritePredicateForClient:(id)arg1 ;
-(id)generateAnalyticsData:(id)arg1 ;
-(id)rewriteNowAdjustedForHomeTimeZone:(id)arg1 ;
-(id)rewritePredicate:(id)arg1 forDaemon:(BOOL)arg2 message:(id)arg3 ;
-(void)fillAnalyticsData:(id)arg1 forPredicate:(id)arg2 ;
-(id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3 ;
-(id)addDeltaToNow:(id)arg1 ;
-(id)dateTodayMatchingComponents:(id)arg1 ;
-(unsigned long long)cameraSignificantEvent;
-(void)setCameraSignificantEvent:(unsigned long long)arg1 ;
@end

