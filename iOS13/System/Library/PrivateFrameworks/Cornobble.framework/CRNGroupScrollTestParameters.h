/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName; 
+(id)parametersByCombining:(id)arg1 testName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)parameters;
-(RCPSyntheticEventStream *)eventStream;
-(void)setParameters:(NSArray *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(id)initWithTestName:(id)arg1 withParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)composerBlock;
@end

