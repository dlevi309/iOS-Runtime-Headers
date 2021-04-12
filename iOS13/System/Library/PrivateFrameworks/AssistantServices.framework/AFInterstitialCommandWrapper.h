/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol SAAceCommand;
@class AceObject;

@interface AFInterstitialCommandWrapper : NSObject {

	/*^block*/id _completion;
	AceObject*<SAAceCommand> _command;
	AceObject*<SAAceCommand> _defaultReply;

}

@property (nonatomic,readonly) AceObject*<SAAceCommand> command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) AceObject*<SAAceCommand> defaultReply;              //@synthesize defaultReply=_defaultReply - In the implementation block
-(void)dealloc;
-(AceObject*<SAAceCommand>)command;
-(void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2 ;
-(id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(/*^block*/id)arg3 ;
-(AceObject*<SAAceCommand>)defaultReply;
@end

