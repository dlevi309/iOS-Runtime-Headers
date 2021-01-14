/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MPARC4RandomSource : NSObject <MPRandom, NSSecureCoding, NSCopying> {

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

