/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStateUploading : NSObject <PFLTaskState> {

	NSData* _privatizedDiff;
	long long _diffCount;
	NSDictionary* _metrics;
	NSNumber* _numValidationSamples;

}

@property (nonatomic,readonly) long long diffCount;                          //@synthesize diffCount=_diffCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSNumber * numValidationSamples;              //@synthesize numValidationSamples=_numValidationSamples - In the implementation block
@property (nonatomic,readonly) NSData * privatizedDiff;                      //@synthesize privatizedDiff=_privatizedDiff - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)metrics;
-(void)suspend;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)numValidationSamples;
-(id)initWithPrivatizedDiff:(id)arg1 diffCount:(long long)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4 ;
-(long long)diffCount;
-(NSData *)privatizedDiff;
@end

