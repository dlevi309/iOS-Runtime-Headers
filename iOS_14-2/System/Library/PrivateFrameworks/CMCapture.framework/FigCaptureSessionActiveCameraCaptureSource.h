/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWFigVideoCaptureDevice, NSString;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {

	OpaqueFigCaptureSourceRef _source;
	BWFigVideoCaptureDevice* _device;
	NSString* _nonLocalizedName;
	int _deviceType;

}

@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * nonLocalizedName;                   //@synthesize nonLocalizedName=_nonLocalizedName - In the implementation block
@property (nonatomic,readonly) int deviceType;                                //@synthesize deviceType=_deviceType - In the implementation block
-(int)deviceType;
-(BWFigVideoCaptureDevice *)device;
-(NSString *)nonLocalizedName;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 device:(id)arg2 ;
-(void)dealloc;
-(OpaqueFigCaptureSourceRef)source;
@end

