/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	BOOL _onlyMultiDevice;
	BOOL _onlySingleDevice;
	BOOL _requiresCharging;
	BOOL _pushTriggersSync;
	BOOL _additionsCountTowardTriggeredSyncBucket;
	BOOL _deletionsCountTowardTriggeredSyncBucket;
	BOOL _additionTriggersImmediateSync;
	BOOL _deletionTriggersImmediateSync;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _feature;
	NSArray* _streamNames;
	NSArray* _sources;
	NSArray* _destinations;
	NSString* _transport;
	unsigned long long _periodicSyncCadenceInMinutes;
	unsigned long long _oldestEventToSyncInDays;
	NSArray* _requiresCompanions;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(id)init;
-(id)description;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

