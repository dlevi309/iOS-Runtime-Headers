/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, HMDVideoResolution;

@interface HMDVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	HMDVideoResolution* _videoResolution;
	NSNumber* _framerate;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                             //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                            //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoResolution * videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * framerate;                              //@synthesize framerate=_framerate - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)translateImageResolution:(id)arg1 imageWidth:(id*)arg2 imageHeight:(id*)arg3 ;
-(HMDVideoResolution *)videoResolution;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)framerate;
-(NSNumber *)imageWidth;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)imageHeight;
-(BOOL)_parseFromTLVData;
-(id)translateImageWidth:(id)arg1 imageHeight:(id)arg2 ;
-(id)initWithResolution:(id)arg1 framerate:(id)arg2 ;
@end

