/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)text;
-(NSArray *)alternativeInterpretations;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3 ;
@end

