/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPHistoryReplicaMergeOptions.h>
@class NSDate;


@protocol MSPHistoryReplicaMergeOptions <MSPReplicaMergeOptions>
@property (readonly) NSDate * earliestKnownSyncDate; 
@property (readonly) long long modificationDatePolicy; 
@required
-(id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;
-(NSDate *)earliestKnownSyncDate;
-(long long)modificationDatePolicy;

@end


@class NSDate, NSString;

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPHistoryReplicaMergeOptions> {

	NSDate* _earliestKnownSyncDate;
	long long _modificationDatePolicy;

}

@property (readonly) NSDate * earliestKnownSyncDate;                //@synthesize earliestKnownSyncDate=_earliestKnownSyncDate - In the implementation block
@property (readonly) long long modificationDatePolicy;              //@synthesize modificationDatePolicy=_modificationDatePolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2 ;
-(NSDate *)earliestKnownSyncDate;
-(long long)modificationDatePolicy;
@end

