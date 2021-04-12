/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWPortraitHDRStagingNode : BWNode {

	os_unfair_lock_s _lock;
	long long _settingsID;
	BOOL _passthroughBuffer;
	opaqueCMSampleBufferRef _stagedBuffer;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)bufferReceivedWithFlags:(unsigned)arg1 error:(int)arg2 ;
@end

