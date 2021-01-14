/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)input;
-(UITextSuggestion *)textSuggestion;
-(id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
-(id)candidate;
-(unsigned long long)customInfoType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
@end

