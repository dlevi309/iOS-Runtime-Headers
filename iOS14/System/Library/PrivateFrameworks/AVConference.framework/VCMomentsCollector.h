/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsCollectorDelegate.h>

@class VCMoments, NSString;

@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate> {

	long long _streamToken;
	VCMoments* _moments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cleanupActiveRequests;
-(id)initWithStreamToken:(long long)arg1 ;
-(void)stream:(id)arg1 addAudioSampleBuffer:(opaqueVCAudioBufferListRef)arg2 timestamp:(unsigned)arg3 ;
-(void)stream:(id)arg1 addVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4 ;
@end

