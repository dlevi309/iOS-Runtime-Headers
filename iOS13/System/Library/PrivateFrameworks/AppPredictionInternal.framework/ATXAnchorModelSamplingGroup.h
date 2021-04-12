/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray;

@interface ATXAnchorModelSamplingGroup : NSObject {

	NSArray* _anchorWhitelist;
	long long _samplingGroupId;

}

@property (nonatomic,readonly) NSArray * anchorWhitelist;              //@synthesize anchorWhitelist=_anchorWhitelist - In the implementation block
@property (nonatomic,readonly) long long samplingGroupId;              //@synthesize samplingGroupId=_samplingGroupId - In the implementation block
+(id)getSamplingGroupForDataCollection;
+(void)resetSamplingGroupAssignmentForUser;
+(long long)assignSamplingGroupToUserAndPersistToDefaults:(id)arg1 ;
+(long long)selectSamplingGroupForUser;
+(unsigned long long)numSamplingGroups;
+(id)samplingGroupFromSamplingGroupId:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithAnchorWhitelist:(id)arg1 samplingGroupId:(long long)arg2 ;
-(NSArray *)anchorWhitelist;
-(long long)samplingGroupId;
@end

