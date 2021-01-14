/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	long long _resolution;
	NSNumber* _frameRate;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) long long resolution;                     //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * frameRate;                //@synthesize frameRate=_frameRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)resolution;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)frameRate;
-(NSNumber *)imageWidth;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)imageHeight;
-(BOOL)_parseFromTLVData;
-(id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3 ;
-(id)initWithResolution:(long long)arg1 frameRate:(id)arg2 ;
@end

