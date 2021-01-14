/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {

	TVRCDevice* _device;
	BOOL _recordsAutomatically;

}

@property (assign,nonatomic) BOOL recordsAutomatically; 
-(void)start;
-(void)stop;
-(id)_initWithDevice:(id)arg1 ;
-(BOOL)recordsAutomatically;
-(void)setRecordsAutomatically:(BOOL)arg1 ;
@end

