/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSDictionary, NSNumber;

@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject {

	NSDictionary* _bitRateByFrameRate;
	NSNumber* _keyFrameInterval;
	long long _resolution;
	long long _h264Level;

}

@property (readonly) NSDictionary * bitRateByFrameRate;              //@synthesize bitRateByFrameRate=_bitRateByFrameRate - In the implementation block
@property (readonly) NSNumber * keyFrameInterval;                    //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (readonly) long long resolution;                           //@synthesize resolution=_resolution - In the implementation block
@property (readonly) long long h264Level;                            //@synthesize h264Level=_h264Level - In the implementation block
-(long long)resolution;
-(id)description;
-(NSNumber *)keyFrameInterval;
-(long long)h264Level;
-(NSDictionary *)bitRateByFrameRate;
-(id)initWithResolution:(long long)arg1 bitRateByFrameRate:(id)arg2 keyFrameInterval:(id)arg3 h264Level:(long long)arg4 ;
@end

