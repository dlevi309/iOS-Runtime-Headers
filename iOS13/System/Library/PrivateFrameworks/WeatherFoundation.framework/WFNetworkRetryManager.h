/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSMutableDictionary *)failTrackerDict;
-(id)apiVersionForSettings:(id)arg1 ;
-(void)requestSuccessForAPIVersion:(id)arg1 ;
-(void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2 ;
-(id)apiVersionForSettings:(id)arg1 aggregateDictionary:(id)arg2 ;
-(BOOL)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2 ;
-(NSMutableSet *)failingAPIVersionsSet;
-(void)requestSuccessForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2 ;
-(void)requestFailureForAPIVersion:(id)arg1 aggregateDictionary:(id)arg2 error:(id)arg3 ;
-(NSArray *)apiVersions;
-(NSArray *)failingAPIVersions;
-(int)consecutiveFailsForAPIVersion:(id)arg1 ;
-(double)lastFailTimeInSecondsForAPIVersion:(id)arg1 ;
@end

