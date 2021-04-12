/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, _MRNowPlayingPlayerProtobuf, NSData;

@interface MRPlayer : NSObject {

	NSString* _identifier;
	NSString* _displayName;
	long long _audioSessionType;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long audioSessionType;                            //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (nonatomic,copy,readonly) NSData * data; 
+(id)defaultPlayer;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(_MRNowPlayingPlayerProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasAuxiliaryProperties;
-(void)setAudioSessionType:(long long)arg1 ;
-(long long)audioSessionType;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
@end

