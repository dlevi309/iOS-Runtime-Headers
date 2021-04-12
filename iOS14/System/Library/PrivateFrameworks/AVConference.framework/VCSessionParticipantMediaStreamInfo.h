/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCMediaStream, NSMutableArray, NSArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject {

	VCMediaStream* _stream;
	NSMutableArray* _streamConfigs;

}

@property (nonatomic,retain) VCMediaStream * stream;                 //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSArray * streamConfigs;              //@synthesize streamConfigs=_streamConfigs - In the implementation block
-(VCMediaStream *)stream;
-(void)setStream:(VCMediaStream *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)streamConfigs;
-(void)addStreamConfig:(id)arg1 ;
@end

