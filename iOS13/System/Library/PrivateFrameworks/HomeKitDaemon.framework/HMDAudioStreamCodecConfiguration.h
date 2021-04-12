/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDAudioStreamCodecType, HMDAudioStreamCodecParameters;

@interface HMDAudioStreamCodecConfiguration : NSObject <NSCopying> {

	HMDAudioStreamCodecType* _codecType;
	HMDAudioStreamCodecParameters* _codecParameters;

}

@property (nonatomic,retain) HMDAudioStreamCodecType * codecType;                          //@synthesize codecType=_codecType - In the implementation block
@property (nonatomic,retain) HMDAudioStreamCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDAudioStreamCodecType *)codecType;
-(void)setCodecType:(HMDAudioStreamCodecType *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HMDAudioStreamCodecParameters *)codecParameters;
-(id)serializeWithError:(id*)arg1 ;
-(void)setCodecParameters:(HMDAudioStreamCodecParameters *)arg1 ;
-(id)initWithCodecType:(id)arg1 codecParameters:(id)arg2 ;
@end

