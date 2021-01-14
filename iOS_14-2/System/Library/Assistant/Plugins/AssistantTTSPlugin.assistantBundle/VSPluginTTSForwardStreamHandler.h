/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/AssistantTTSPlugin.assistantBundle/AssistantTTSPlugin
*/

#import <libobjc.A.dylib/AFServiceCommand.h>

@class SATTSSpeechSynthesisStreaming, NSString;

@interface VSPluginTTSForwardStreamHandler : NSObject <AFServiceCommand> {

	SATTSSpeechSynthesisStreaming* _streamObject;

}

@property (nonatomic,retain) SATTSSpeechSynthesisStreaming * streamObject;              //@synthesize streamObject=_streamObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(SATTSSpeechSynthesisStreaming *)streamObject;
-(void)setStreamObject:(SATTSSpeechSynthesisStreaming *)arg1 ;
@end

