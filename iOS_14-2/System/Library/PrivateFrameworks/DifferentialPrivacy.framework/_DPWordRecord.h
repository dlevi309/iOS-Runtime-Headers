/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _wordPosition;
	NSString* _word;

}

@property (nonatomic,readonly) NSNumber * wordPosition;              //@synthesize wordPosition=_wordPosition - In the implementation block
@property (nonatomic,copy,readonly) NSString * word;                 //@synthesize word=_word - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)word:(id)arg1 atPosition:(id)arg2 ;
+(id)sequenceAndFragmentsFrom:(id)arg1 fragmentLimit:(unsigned long long)arg2 fragmentWidth:(unsigned long long)arg3 puzzlePieceCount:(unsigned long long)arg4 ;
+(id)bogusCharacter;
-(NSString *)word;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)wordPosition;
-(id)sequenceWithoutPadding;
-(id)initWithWord:(id)arg1 atPosition:(id)arg2 ;
-(BOOL)isEqualToWordRecord:(id)arg1 ;
@end

