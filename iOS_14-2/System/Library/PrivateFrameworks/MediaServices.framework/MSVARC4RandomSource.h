/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/MSVRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MSVARC4RandomSource : NSObject <MSVRandom, NSSecureCoding, NSCopying> {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed;              //@synthesize seed=_seed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)seed;
-(void)setSeed:(NSData *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

