/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class MSPPosition, MSPVectorTimestamp;


@protocol MSPOrderedReplicaRecord <MSPReplicaRecord>
@property (nonatomic,readonly) MSPPosition * position; 
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp; 
@required
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;

@end

