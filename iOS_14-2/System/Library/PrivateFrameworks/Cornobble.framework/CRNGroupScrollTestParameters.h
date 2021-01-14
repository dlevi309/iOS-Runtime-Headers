/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

#import <libobjc.A.dylib/CRNScrollTestParameters.h>
#import <libobjc.A.dylib/CRNBlockBasedScrollTestParameters.h>

@class RCPSyntheticEventStream, NSString, NSArray;

@interface CRNGroupScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters> {

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
+(id)parametersByCombining:(id)arg1 testName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(RCPSyntheticEventStream *)eventStream;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(/*^block*/id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
-(id)initWithTestName:(id)arg1 withParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

