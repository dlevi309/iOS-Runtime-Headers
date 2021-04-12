/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSession : NSObject {

	NSString* _identifier;
	NSString* _type;
	NSData* _playbackSessionData;

}

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * protobuf; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackSessionData;                  //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
-(NSString *)type;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(_MRPlaybackSessionProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)playbackSessionData;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3 ;
@end

