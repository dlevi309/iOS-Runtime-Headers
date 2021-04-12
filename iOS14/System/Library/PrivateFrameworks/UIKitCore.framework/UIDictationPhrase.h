/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {

	NSString* _text;
	NSArray* _alternativeInterpretations;
	long long _style;

}

@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeInterpretations;              //@synthesize alternativeInterpretations=_alternativeInterpretations - In the implementation block
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3 ;
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(NSArray *)alternativeInterpretations;
-(id)description;
-(NSString *)text;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)dealloc;
@end

