/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString;

@interface CACVoiceOverAnnouncement : NSObject {

	NSString* _message;
	long long _type;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id completion;                   //@synthesize completion=_completion - In the implementation block
-(NSString *)message;
-(id)completion;
-(long long)type;
-(id)initWithMessage:(id)arg1 type:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

