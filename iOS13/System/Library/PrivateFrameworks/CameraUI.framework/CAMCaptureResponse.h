/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(unsigned short)sessionIdentifier;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3 ;
-(void)releaseCachedImages;
@end

