/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate {

	NSString* _remainderCandidateString;
	NSArray* _autoconvertedCandidatePointerValues;

}

@property (nonatomic,copy) NSString * remainderCandidateString;                        //@synthesize remainderCandidateString=_remainderCandidateString - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidatePointerValues;              //@synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(NSString *)remainderCandidateString;
-(void)setRemainderCandidateString:(NSString *)arg1 ;
-(NSArray *)autoconvertedCandidatePointerValues;
-(void)setAutoconvertedCandidatePointerValues:(NSArray *)arg1 ;
@end

