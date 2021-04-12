/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioCodecGroup : HAPNumberParser <NSCopying, NSSecureCoding> {

	unsigned long long _codec;

}

@property (nonatomic,readonly) unsigned long long codec;              //@synthesize codec=_codec - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecs:(id)arg1 ;
-(unsigned long long)codec;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithAudioCodecGroup:(unsigned long long)arg1 ;
@end

