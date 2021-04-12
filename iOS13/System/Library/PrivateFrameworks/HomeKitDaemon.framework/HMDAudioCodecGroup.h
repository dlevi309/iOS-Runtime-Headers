/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioCodecGroup : HMDNumberParser <NSCopying, NSSecureCoding> {

	unsigned long long _codec;

}

@property (nonatomic,readonly) unsigned long long codec;              //@synthesize codec=_codec - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecs:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)codec;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithAudioCodecGroup:(unsigned long long)arg1 ;
@end

