/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWPortraitHDRStagingNode : BWNode {

	os_unfair_lock_s _lock;
	long long _settingsID;
	BOOL _passthroughBuffer;
	opaqueCMSampleBufferRef _stagedBuffer;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)bufferReceivedWithFlags:(unsigned)arg1 error:(int)arg2 ;
@end

