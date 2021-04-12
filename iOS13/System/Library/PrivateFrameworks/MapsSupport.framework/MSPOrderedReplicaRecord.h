/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

