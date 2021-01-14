/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSession : NSObject {

	NSString* _identifier;
	NSString* _type;
	NSData* _playbackSessionData;
	NSString* _revision;
	NSData* _metadata;

}

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * playbackSessionData;                           //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * revision;                           //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSData * metadata;                             //@synthesize metadata=_metadata - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)playbackSessionData;
-(void)setType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(NSString *)type;
-(_MRPlaybackSessionProtobuf *)protobuf;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3 revision:(id)arg4 metadata:(id)arg5 ;
-(void)setPlaybackSessionData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSData *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)revision;
@end

