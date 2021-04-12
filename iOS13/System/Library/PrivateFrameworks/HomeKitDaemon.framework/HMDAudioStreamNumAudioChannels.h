/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDAudioStreamNumAudioChannels : NSObject <NSCopying> {

	unsigned char _numAudioChannels;

}

@property (assign,nonatomic) unsigned char numAudioChannels;              //@synthesize numAudioChannels=_numAudioChannels - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setNumAudioChannels:(unsigned char)arg1 ;
-(unsigned char)numAudioChannels;
-(id)initWithNumAudioChannels:(unsigned char)arg1 ;
@end

