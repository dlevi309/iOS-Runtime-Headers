/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)imageHeight;
-(NSNumber *)imageWidth;
-(long long)resolution;
-(NSNumber *)frameRate;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3 ;
-(id)initWithResolution:(long long)arg1 frameRate:(id)arg2 ;
@end

