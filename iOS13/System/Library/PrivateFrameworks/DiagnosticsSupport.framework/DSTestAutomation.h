/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@interface DSTestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(id)sharedInstance;
+(void)postInteractiveTestEvent:(id)arg1 info:(id)arg2 ;
+(void)postConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
@end

