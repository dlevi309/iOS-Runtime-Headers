/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {

	long long _transliterationType;
	BOOL _transliterationCandidate;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isTransliterationCandidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 transliterationType:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

