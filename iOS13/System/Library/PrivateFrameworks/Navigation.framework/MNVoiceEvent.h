/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString;

@interface MNVoiceEvent : NSObject {

	BOOL _isPrivate;
	unsigned long long _options;
	NSString* _textToSpeak;
	unsigned long long _shortPromptType;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * textToSpeak;                     //@synthesize textToSpeak=_textToSpeak - In the implementation block
@property (nonatomic,readonly) unsigned long long shortPromptType;              //@synthesize shortPromptType=_shortPromptType - In the implementation block
@property (nonatomic,copy,readonly) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                  //@synthesize isPrivate=_isPrivate - In the implementation block
+(id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)isValidShortPromptType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)options;
-(id)completion;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(BOOL)isPrivate;
-(NSString *)textToSpeak;
-(id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)shortPromptType;
@end

