/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(double)timestamp;
-(id)contextID;
-(MPRemoteCommand *)command;
-(id)contentItemID;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)mediaRemoteOptions;
-(id)commandID;
-(id)interfaceID;
-(long long)playbackQueueOffset;
@end

