/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/SFSpeechRecognitionRequest.h>

@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
@end

