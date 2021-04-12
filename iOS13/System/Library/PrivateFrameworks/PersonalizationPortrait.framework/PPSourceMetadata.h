/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PPSourceMetadata : _PASZonedObject <NSCopying, NSSecureCoding> {

	unsigned char _flags;
	unsigned short _donationCount;
	unsigned _dwellTimeSeconds;
	unsigned _lengthSeconds;
	unsigned _lengthCharacters;

}

@property (nonatomic,readonly) unsigned dwellTimeSeconds;                 //@synthesize dwellTimeSeconds=_dwellTimeSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthSeconds;                    //@synthesize lengthSeconds=_lengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthCharacters;                 //@synthesize lengthCharacters=_lengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned short donationCount;              //@synthesize donationCount=_donationCount - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                       //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)flags;
-(id)initWithDwellTimeSeconds:(unsigned)arg1 lengthSeconds:(unsigned)arg2 lengthCharacters:(unsigned)arg3 donationCount:(unsigned short)arg4 flags:(unsigned char)arg5 ;
-(BOOL)isEqualToSourceMetadata:(id)arg1 ;
-(unsigned)dwellTimeSeconds;
-(unsigned)lengthSeconds;
-(unsigned)lengthCharacters;
-(unsigned short)donationCount;
@end

