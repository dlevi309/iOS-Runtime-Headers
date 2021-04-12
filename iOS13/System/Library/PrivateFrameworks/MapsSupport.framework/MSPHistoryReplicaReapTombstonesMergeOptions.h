/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaMergeOptionsReapTombstones.h>
#import <libobjc.A.dylib/MSPHistoryReplicaMergeOptions.h>

@class NSDate, NSString;

@interface MSPHistoryReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones <MSPHistoryReplicaMergeOptions> {

	NSDate* _earliestKnownSyncDate;
	long long _modificationDatePolicy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * earliestKnownSyncDate;                //@synthesize earliestKnownSyncDate=_earliestKnownSyncDate - In the implementation block
@property (readonly) long long modificationDatePolicy;              //@synthesize modificationDatePolicy=_modificationDatePolicy - In the implementation block
-(id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2 ;
-(NSDate *)earliestKnownSyncDate;
-(long long)modificationDatePolicy;
@end

