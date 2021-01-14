/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

	unsigned long long _uniqueID;
	unsigned long long _completionUniqueID;

}

@property (nonatomic,readonly) unsigned long long uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long completionUniqueID;              //@synthesize completionUniqueID=_completionUniqueID - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(unsigned long long)uniqueID;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4 ;
-(unsigned long long)completionUniqueID;
-(BOOL)isInlineCompletionCandidate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCompletionCandidate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

