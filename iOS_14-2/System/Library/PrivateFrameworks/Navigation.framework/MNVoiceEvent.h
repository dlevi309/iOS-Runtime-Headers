/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEqualToEvent:(id)arg1 ;
-(unsigned long long)options;
-(id)completion;
-(NSString *)textToSpeak;
-(id)description;
-(BOOL)isPrivate;
-(id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)shortPromptType;
@end

