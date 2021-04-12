/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	BOOL _emojiCandidate;
	BOOL _extensionCandidate;
	BOOL _isForShortcutConversion;
	BOOL _isAutocorrection;
	BOOL _OTAWordListCandidate;
	BOOL _regionalCandidate;
	BOOL _responseKitCandidate;
	BOOL _bilingualCandidate;
	BOOL _asIsCandidate;
	BOOL _continuousPathConversion;
	BOOL _partialCandidate;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned long long _deleteCount;
	long long _cursorMovement;
	NSString* _responseKitCategory;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;                                      //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
@property (assign,getter=isContinuousPathConversion,nonatomic) BOOL continuousPathConversion;              //@synthesize continuousPathConversion=_continuousPathConversion - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)input;
-(id)label;
-(BOOL)isContinuousPathConversion;
-(id)candidate;
-(BOOL)isForShortcutConversion;
-(long long)cursorMovement;
-(BOOL)isEmojiCandidate;
-(BOOL)isExtensionCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
-(unsigned long long)deleteCount;
-(BOOL)isResponseKitCandidate;
-(id)responseKitCategory;
-(BOOL)isBilingualCandidate;
-(BOOL)isPartialCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isAutocorrection;
-(BOOL)isAsIsCandidate;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6 ;
-(NSNumber *)mecabraCandidatePointerValue;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(void)setContinuousPathConversion:(BOOL)arg1 ;
@end

