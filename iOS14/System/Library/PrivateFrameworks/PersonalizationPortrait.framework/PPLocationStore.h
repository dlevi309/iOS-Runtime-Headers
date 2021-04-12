/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPClientFeedbackHelper, NSString;

@interface PPLocationStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
+(id)placemarkWithName:(id)arg1 clLocation:(id)arg2 ;
+(id)defaultStore;
+(id)describeLocationConsumer:(unsigned long long)arg1 ;
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 thoroughfare:(id)arg3 subthoroughFare:(id)arg4 locality:(id)arg5 subLocality:(id)arg6 administrativeArea:(id)arg7 subAdministrativeArea:(id)arg8 postalCode:(id)arg9 countryCode:(id)arg10 country:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 ;
+(id)_mergedThoroughfareForThorughfare:(id)arg1 subThoroughfare:(id)arg2 subPremises:(id)arg3 ;
+(id)placemarkWithLatitudeDegrees:(id)arg1 longitudeDegrees:(id)arg2 name:(id)arg3 thoroughfare:(id)arg4 subthoroughFare:(id)arg5 locality:(id)arg6 subLocality:(id)arg7 administrativeArea:(id)arg8 subAdministrativeArea:(id)arg9 postalCode:(id)arg10 countryCode:(id)arg11 country:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)locationRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(void)registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)rankedLocationsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
@end
