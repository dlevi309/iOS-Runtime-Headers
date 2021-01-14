/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WFNetworkRetryManager : NSObject {

	NSMutableDictionary* _failTrackerDict;
	NSMutableSet* _failingAPIVersionsSet;

}

@property (nonatomic,readonly) NSMutableDictionary * failTrackerDict;              //@synthesize failTrackerDict=_failTrackerDict - In the implementation block
@property (nonatomic,readonly) NSMutableSet * failingAPIVersionsSet;               //@synthesize failingAPIVersionsSet=_failingAPIVersionsSet - In the implementation block
@property (nonatomic,readonly) NSArray * apiVersions; 
@property (nonatomic,readonly) NSArray * failingAPIVersions; 
-(NSMutableSet *)failingAPIVersionsSet;
-(id)init;
-(void)requestSuccessForAPIVersion:(id)arg1 ;
-(BOOL)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2 ;
-(double)lastFailTimeInSecondsForAPIVersion:(id)arg1 ;
-(NSArray *)failingAPIVersions;
-(id)apiVersionForSettings:(id)arg1 ;
-(NSArray *)apiVersions;
-(NSMutableDictionary *)failTrackerDict;
-(int)consecutiveFailsForAPIVersion:(id)arg1 ;
-(void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2 ;
@end

