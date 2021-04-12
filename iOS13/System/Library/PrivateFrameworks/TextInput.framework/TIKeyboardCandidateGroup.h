/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSOrderedSet* _candidates;

}

@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSOrderedSet * candidates;              //@synthesize candidates=_candidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSOrderedSet *)candidates;
-(void)setCandidates:(NSOrderedSet *)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(id)mutableCandidates;
-(BOOL)hasAlternativeText;
@end

