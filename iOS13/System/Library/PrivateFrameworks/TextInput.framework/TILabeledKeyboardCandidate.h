/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {

	BOOL _transliterationCandidate;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;                                                                 //@synthesize label=_label - In the implementation block
@property (getter=isTransliterationCandidate,nonatomic,readonly) BOOL transliterationCandidate;              //@synthesize transliterationCandidate=_transliterationCandidate - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isTransliterationCandidate;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 transliterationCandidate:(BOOL)arg4 ;
@end

