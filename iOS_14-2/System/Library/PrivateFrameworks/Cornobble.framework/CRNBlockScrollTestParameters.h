/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

#import <libobjc.A.dylib/CRNScrollTestParameters.h>
#import <libobjc.A.dylib/CRNBlockBasedScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNBlockScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters> {

	NSString* _testName;
	/*^block*/id _completionHandler;
	/*^block*/id _composerBlock;

}

@property (nonatomic,copy) id composerBlock;                                       //@synthesize composerBlock=_composerBlock - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RCPSyntheticEventStream *)eventStream;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 ;
-(void)setComposerBlock:(id)arg1 ;
@end

