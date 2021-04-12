/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {

	unsigned long long _customInfoType;
	UITextSuggestion* _textSuggestion;

}

@property (nonatomic,readonly) UITextSuggestion * textSuggestion;              //@synthesize textSuggestion=_textSuggestion - In the implementation block
+(id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
+(id)candidateWithSuggestion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)input;
-(id)label;
-(unsigned long long)customInfoType;
-(id)candidate;
-(UITextSuggestion *)textSuggestion;
-(id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
@end

