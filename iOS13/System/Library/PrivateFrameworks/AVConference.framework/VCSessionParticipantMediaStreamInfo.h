/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCMediaStream, NSMutableArray, NSArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject {

	VCMediaStream* _stream;
	NSMutableArray* _streamConfigs;

}

@property (nonatomic,retain) VCMediaStream * stream;                 //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSArray * streamConfigs;              //@synthesize streamConfigs=_streamConfigs - In the implementation block
-(id)init;
-(void)dealloc;
-(VCMediaStream *)stream;
-(void)setStream:(VCMediaStream *)arg1 ;
-(NSArray *)streamConfigs;
-(void)addStreamConfig:(id)arg1 ;
@end

