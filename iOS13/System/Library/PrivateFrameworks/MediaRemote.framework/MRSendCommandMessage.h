/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSDate, _MRNowPlayingPlayerPathProtobuf;

@interface MRSendCommandMessage : MRProtocolMessage {

	NSDictionary* _options;
	NSDate* _serializationDate;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate;                                //@synthesize serializationDate=_serializationDate - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (nonatomic,readonly) unsigned appOptions; 
-(NSDictionary *)options;
-(unsigned long long)type;
-(unsigned)command;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned)appOptions;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 ;
-(NSDate *)serializationDate;
@end

