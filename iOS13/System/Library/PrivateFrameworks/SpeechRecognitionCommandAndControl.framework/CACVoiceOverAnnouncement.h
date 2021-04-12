/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(NSString *)message;
-(id)completion;
-(id)initWithMessage:(id)arg1 type:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

