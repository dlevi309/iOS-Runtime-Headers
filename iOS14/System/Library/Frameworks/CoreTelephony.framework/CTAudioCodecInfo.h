/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _callId;
	long long _codec;
	unsigned long long _amrMode;
	long long _evsBandwidth;
	long long _evsBitrate;

}

@property (assign,nonatomic) unsigned long long callId;               //@synthesize callId=_callId - In the implementation block
@property (assign,nonatomic) long long codec;                         //@synthesize codec=_codec - In the implementation block
@property (assign,nonatomic) unsigned long long amrMode;              //@synthesize amrMode=_amrMode - In the implementation block
@property (assign,nonatomic) long long evsBandwidth;                  //@synthesize evsBandwidth=_evsBandwidth - In the implementation block
@property (assign,nonatomic) long long evsBitrate;                    //@synthesize evsBitrate=_evsBitrate - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)codec;
-(unsigned long long)amrMode;
-(unsigned long long)callId;
-(void)setCodec:(long long)arg1 ;
-(long long)evsBitrate;
-(void)setCallId:(unsigned long long)arg1 ;
-(void)setAmrMode:(unsigned long long)arg1 ;
-(long long)evsBandwidth;
-(id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5 ;
-(void)setEvsBitrate:(long long)arg1 ;
-(void)setEvsBandwidth:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

