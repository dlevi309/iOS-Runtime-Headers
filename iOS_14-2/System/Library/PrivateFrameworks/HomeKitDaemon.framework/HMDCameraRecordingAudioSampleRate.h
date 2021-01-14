/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser <NSCopying, NSSecureCoding> {

	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithAudioSampleRates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSampleRate:(long long)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
@end

