/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)identifier;
+(id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4 ;
-(id)whitespaceAndNewlineCharacterSet;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(BOOL)arg7 resolveEKLocations:(BOOL)arg8 explanationSet:(id)arg9 ;
-(id)supportedLocationFields;
-(BOOL)isEligibleForPredictions:(id)arg1 ;
-(BOOL)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3 ;
@end

