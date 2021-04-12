/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPSourceMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned char _flags;
	unsigned short _donationCount;
	unsigned short _contactHandleCount;
	unsigned _dwellTimeSeconds;
	unsigned _lengthSeconds;
	unsigned _lengthCharacters;

}

@property (nonatomic,readonly) unsigned dwellTimeSeconds;                      //@synthesize dwellTimeSeconds=_dwellTimeSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthSeconds;                         //@synthesize lengthSeconds=_lengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthCharacters;                      //@synthesize lengthCharacters=_lengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned short donationCount;                   //@synthesize donationCount=_donationCount - In the implementation block
@property (nonatomic,readonly) unsigned short contactHandleCount;              //@synthesize contactHandleCount=_contactHandleCount - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(id)featureValueForName:(id)arg1 ;
-(unsigned)lengthSeconds;
-(NSSet *)featureNames;
-(BOOL)isEqualToSourceMetadata:(id)arg1 ;
-(id)init;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDwellTimeSeconds:(unsigned)arg1 lengthSeconds:(unsigned)arg2 lengthCharacters:(unsigned)arg3 donationCount:(unsigned short)arg4 contactHandleCount:(unsigned short)arg5 flags:(unsigned char)arg6 ;
-(id)description;
-(unsigned short)contactHandleCount;
-(unsigned short)donationCount;
-(unsigned)lengthCharacters;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFlags:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)dwellTimeSeconds;
-(BOOL)isEqual:(id)arg1 ;
@end

