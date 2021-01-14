/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject {

	unsigned short _sessionIdentifier;
	long long _type;
	CAMCaptureCoordinationInfo* _coordinationInfo;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
-(id)init;
-(unsigned short)sessionIdentifier;
-(long long)type;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3 ;
-(void)releaseCachedImages;
@end

