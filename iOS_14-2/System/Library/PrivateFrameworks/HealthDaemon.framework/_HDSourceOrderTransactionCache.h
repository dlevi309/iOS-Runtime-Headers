/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSArray, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject {

	HDProfile* _profile;
	NSArray* _defaultOrderedSources;
	NSMutableDictionary* _orderedSourceIDsByBundleIdentifier;

}
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(id)defaultOrderSourcesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(id)orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
@end

