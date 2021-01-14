/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@class NSString;

@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(BOOL)arg7 resolveEKLocations:(BOOL)arg8 explanationSet:(id)arg9 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(BOOL)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3 ;
-(BOOL)testMetadataForValidAddressAndNameWithEvent:(id)arg1 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2 ;
-(id)identifier;
-(id)whitespaceAndNewlineCharacterSet;
-(id)supportedLocationFields;
@end

