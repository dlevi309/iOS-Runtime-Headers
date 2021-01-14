/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addCandidate:(id)arg1 ;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(id)mutableCandidates;
-(BOOL)hasAlternativeText;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)candidates;
-(void)setCandidates:(NSOrderedSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

