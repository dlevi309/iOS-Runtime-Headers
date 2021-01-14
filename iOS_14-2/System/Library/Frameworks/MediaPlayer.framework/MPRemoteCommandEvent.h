/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSString, MPRemoteCommand;

@interface MPRemoteCommandEvent : NSObject {

	NSDictionary* _mediaRemoteOptions;
	NSString* _contextID;
	NSString* _commandID;
	MPRemoteCommand* _command;
	double _timestamp;

}

@property (nonatomic,readonly) MPRemoteCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
+(id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)commandID;
-(id)init;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)interfaceID;
-(long long)playbackQueueOffset;
-(double)timestamp;
-(id)description;
-(id)contextID;
-(id)contentItemID;
-(id)sourceID;
-(id)mediaRemoteOptions;
-(MPRemoteCommand *)command;
@end

