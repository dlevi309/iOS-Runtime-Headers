/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDCameraRecordingBulkSendDataReadEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent> {

	unsigned short _status;
	unsigned long long _byteCount;
	unsigned long long _chunkSequenceNumber;
	unsigned long long _bitRate;
	unsigned long long _iFrameInterval;
	unsigned long long _imageWidth;
	unsigned long long _imageHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long byteCount;                        //@synthesize byteCount=_byteCount - In the implementation block
@property (assign) unsigned short status;                               //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long chunkSequenceNumber;              //@synthesize chunkSequenceNumber=_chunkSequenceNumber - In the implementation block
@property (readonly) unsigned long long bitRate;                        //@synthesize bitRate=_bitRate - In the implementation block
@property (readonly) unsigned long long iFrameInterval;                 //@synthesize iFrameInterval=_iFrameInterval - In the implementation block
@property (readonly) unsigned long long imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (readonly) unsigned long long imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
+(id)uuid;
-(unsigned long long)bitRate;
-(id)attributeDescriptions;
-(unsigned long long)imageWidth;
-(unsigned long long)byteCount;
-(void)setStatus:(unsigned short)arg1 ;
-(unsigned long long)imageHeight;
-(unsigned short)status;
-(void)setByteCount:(unsigned long long)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraID:(id)arg2 bitRate:(unsigned long long)arg3 iFrameInterval:(unsigned long long)arg4 imageWidth:(unsigned long long)arg5 imageHeight:(unsigned long long)arg6 ;
-(void)setChunkSequenceNumber:(unsigned long long)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)iFrameInterval;
-(unsigned long long)chunkSequenceNumber;
@end

