/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@class CFServiceHelper;

@interface CFRequestHandler : NSObject {

	CFServiceHelper* _serviceHelper;

}

@property (retain) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(CFServiceHelper *)serviceHelper;
-(void)setServiceHelper:(CFServiceHelper *)arg1 ;
-(void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3 ;
-(BOOL)isTimeoutDisabled;
@end

