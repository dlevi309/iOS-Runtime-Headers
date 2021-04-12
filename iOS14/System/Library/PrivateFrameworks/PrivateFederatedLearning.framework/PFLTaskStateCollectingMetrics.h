/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL, NSArray;

@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;
	NSArray* _validationIndicies;
	NSArray* _trainingIndicies;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;                  //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
@property (nonatomic,readonly) NSArray * validationIndicies;              //@synthesize validationIndicies=_validationIndicies - In the implementation block
@property (nonatomic,readonly) NSArray * trainingIndicies;                //@synthesize trainingIndicies=_trainingIndicies - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)suspend;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(id)initWithCompiledModelURL:(id)arg1 validationDataIndicies:(id)arg2 trainingDataIndicies:(id)arg3 ;
-(NSArray *)validationIndicies;
-(NSArray *)trainingIndicies;
@end

