/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _wubixingConvertedByPinyin;
	BOOL _prefixMatched;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned long long _deleteCount;
	long long _cursorMovement;
	NSString* _responseKitCategory;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;                                      //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
@property (assign,getter=isContinuousPathConversion,nonatomic) BOOL continuousPathConversion;              //@synthesize continuousPathConversion=_continuousPathConversion - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6 ;
-(id)input;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isAutocorrection;
-(BOOL)isBilingualCandidate;
-(BOOL)isPartialCandidate;
-(BOOL)isAsIsCandidate;
-(BOOL)isWubixingConvertedByPinyin;
-(BOOL)isPrefixMatched;
-(BOOL)isForShortcutConversion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)mecabraCandidatePointerValue;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 ;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(void)setContinuousPathConversion:(BOOL)arg1 ;
-(unsigned long long)deleteCount;
-(long long)cursorMovement;
-(BOOL)isEmojiCandidate;
-(BOOL)isExtensionCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
-(BOOL)isResponseKitCandidate;
-(id)responseKitCategory;
-(id)initWithCoder:(id)arg1 ;
-(id)candidate;
-(BOOL)isContinuousPathConversion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
@end

