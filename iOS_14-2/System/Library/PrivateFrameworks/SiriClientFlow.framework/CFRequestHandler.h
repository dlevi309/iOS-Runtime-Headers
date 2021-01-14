/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

