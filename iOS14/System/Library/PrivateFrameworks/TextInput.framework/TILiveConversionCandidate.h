/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {

	NSString* _candidate;
	BOOL _inlineCandidate;
	BOOL _partialCandidate;

}

@property (assign,getter=isInlineCandidate,nonatomic) BOOL inlineCandidate;                //@synthesize inlineCandidate=_inlineCandidate - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isPartialCandidate;
-(BOOL)isInlineCandidate;
-(void)setInlineCandidate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)candidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
@end

