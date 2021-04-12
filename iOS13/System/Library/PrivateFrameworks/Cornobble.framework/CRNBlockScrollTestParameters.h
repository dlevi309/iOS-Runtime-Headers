/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
-(RCPSyntheticEventStream *)eventStream;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(id)composerBlock;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 ;
-(void)setComposerBlock:(id)arg1 ;
@end

