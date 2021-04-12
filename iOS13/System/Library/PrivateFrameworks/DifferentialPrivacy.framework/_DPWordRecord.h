/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)word;
-(NSNumber *)wordPosition;
-(id)sequenceWithoutPadding;
-(id)initWithWord:(id)arg1 atPosition:(id)arg2 ;
-(BOOL)isEqualToWordRecord:(id)arg1 ;
@end

