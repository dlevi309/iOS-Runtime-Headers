/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {

	TVRCDevice* _device;
	BOOL _recordsAutomatically;

}

@property (assign,nonatomic) BOOL recordsAutomatically; 
-(void)stop;
-(void)start;
-(BOOL)recordsAutomatically;
-(void)setRecordsAutomatically:(BOOL)arg1 ;
-(id)_initWithDevice:(id)arg1 ;
@end

