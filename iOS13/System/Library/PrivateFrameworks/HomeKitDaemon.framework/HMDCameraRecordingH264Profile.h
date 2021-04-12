/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCameraRecordingH264Profile : HMDNumberParser <NSSecureCoding> {

	long long _h264Profile;

}

@property (nonatomic,readonly) long long h264Profile;              //@synthesize h264Profile=_h264Profile - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithProfiles:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(long long)h264Profile;
-(id)initWithH264Profile:(long long)arg1 ;
@end

