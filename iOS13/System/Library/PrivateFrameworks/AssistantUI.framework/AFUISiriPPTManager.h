/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class NSString, NSDictionary;

@interface AFUISiriPPTManager : NSObject {

	BOOL _runningPPT;
	NSString* _currentTestName;
	NSDictionary* _testOptions;

}

@property (nonatomic,readonly) BOOL runningPPT;                              //@synthesize runningPPT=_runningPPT - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentTestName;              //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * testOptions;              //@synthesize testOptions=_testOptions - In the implementation block
+(id)sharedManager;
-(void)reset;
-(NSDictionary *)testOptions;
-(BOOL)runningPPT;
-(NSString *)currentTestName;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 testOptions:(id)arg3 ;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 ;
-(BOOL)isRunningTestName:(id)arg1 ;
@end

