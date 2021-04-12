/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {

	NSString* _candidate;
	BOOL _inlineCandidate;

}

@property (assign,getter=isInlineCandidate,nonatomic) BOOL inlineCandidate;              //@synthesize inlineCandidate=_inlineCandidate - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(id)candidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isInlineCandidate;
-(void)setInlineCandidate:(BOOL)arg1 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
@end

