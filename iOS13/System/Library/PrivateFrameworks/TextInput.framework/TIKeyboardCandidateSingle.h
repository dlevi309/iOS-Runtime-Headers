/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {

	BOOL _extensionCandidate;
	NSString* _candidate;
	NSString* _input;
	long long* _cursorMovement;

}

@property (nonatomic,copy) NSString * candidate;                                               //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * input;                                                   //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) long long* cursorMovement;                                        //@synthesize cursorMovement=_cursorMovement - In the implementation block
@property (assign,getter=isExtensionCandidate,nonatomic) BOOL extensionCandidate;              //@synthesize extensionCandidate=_extensionCandidate - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 ;
+(id)candidateWithUnchangedInput:(id)arg1 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3 ;
+(id)secureCandidateForInput:(id)arg1 slotID:(unsigned)arg2 ;
+(id)secureCandidateForInput:(id)arg1 slotID:(unsigned)arg2 customInfoType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(NSString *)candidate;
-(long long*)cursorMovement;
-(id)candidateByReplacingWithCandidate:(id)arg1 ;
-(BOOL)isExtensionCandidate;
-(id)initWithCandidate:(id)arg1 ;
-(void)setCandidate:(NSString *)arg1 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
-(id)initWithUnchangedInput:(id)arg1 ;
-(id)initWithResponseCandidate:(id)arg1 ;
-(void)setExtensionCandidate:(BOOL)arg1 ;
-(void)setCursorMovement:(long long*)arg1 ;
@end

