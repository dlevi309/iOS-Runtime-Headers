/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _transport;
	unsigned long long _maximumSyncsPerDay;
	unsigned long long _syncBatchSizeInEvents;
	unsigned long long _maximumBatchesPerSync;
	unsigned long long _minimumSyncWindowInSeconds;
	unsigned long long _minimumTimeBetweenSyncsInSeconds;
	unsigned long long _singleDevicePeriodicSyncCadenceInDays;
	unsigned long long _additionsBucketCountTriggeringSync;
	unsigned long long _deletionsBucketCountTriggeringSync;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(id)init;
-(id)description;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

