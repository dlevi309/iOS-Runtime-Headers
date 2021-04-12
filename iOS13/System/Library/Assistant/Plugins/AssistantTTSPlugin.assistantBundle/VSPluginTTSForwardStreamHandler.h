/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

