/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AceObject*<SAAceCommand>)defaultReply;
-(void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2 ;
-(id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(/*^block*/id)arg3 ;
-(AceObject*<SAAceCommand>)command;
-(void)dealloc;
@end

