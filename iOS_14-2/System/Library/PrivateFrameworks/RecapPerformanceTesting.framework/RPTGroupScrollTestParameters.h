/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
*/

#import <libobjc.A.dylib/RPTScrollTestParameters.h>
#import <libobjc.A.dylib/RPTBlockBasedScrollTestParameters.h>

@class NSString, NSArray, RCPSyntheticEventStream;

@interface RPTGroupScrollTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters> {

	NSString* testName;
	/*^block*/id _completionHandler;
	NSArray* _parameters;

}

@property (nonatomic,retain) NSArray * parameters;                                 //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTestName:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(RCPSyntheticEventStream *)eventStream;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(/*^block*/id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
@end

