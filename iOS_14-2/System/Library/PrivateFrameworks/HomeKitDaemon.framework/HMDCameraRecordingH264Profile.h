/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCameraRecordingH264Profile : HAPNumberParser <NSSecureCoding> {

	long long _h264Profile;

}

@property (nonatomic,readonly) long long h264Profile;              //@synthesize h264Profile=_h264Profile - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithProfiles:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)h264Profile;
-(id)initWithH264Profile:(long long)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
@end

