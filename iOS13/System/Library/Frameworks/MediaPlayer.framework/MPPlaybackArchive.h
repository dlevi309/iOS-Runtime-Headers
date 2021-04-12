/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPPlaybackArchiveDisplayProperties, NSString, NSMutableDictionary, NSData;

@interface MPPlaybackArchive : NSObject <NSSecureCoding> {

	MPPlaybackArchiveDisplayProperties* _displayProperties;
	NSString* _bundleIdentifier;
	unsigned long long _supportedOptions;
	unsigned long long _copyOptions;
	unsigned long long _queueControlOptions;
	NSMutableDictionary* _storage;
	long long _type;
	NSString* _playbackSessionIdentifier;
	NSString* _playbackSessionType;
	NSData* _playbackSessionData;

}

@property (assign,nonatomic) unsigned long long copyOptions;                                        //@synthesize copyOptions=_copyOptions - In the implementation block
@property (assign,nonatomic) unsigned long long queueControlOptions;                                //@synthesize queueControlOptions=_queueControlOptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) long long type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * playbackSessionIdentifier;                           //@synthesize playbackSessionIdentifier=_playbackSessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * playbackSessionType;                                 //@synthesize playbackSessionType=_playbackSessionType - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackSessionData;                                   //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchiveDisplayProperties * displayProperties;              //@synthesize displayProperties=_displayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedOptions;                                 //@synthesize supportedOptions=_supportedOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSMutableDictionary *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(unsigned long long)supportedOptions;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(NSData *)playbackSessionData;
-(id)initWithType:(long long)arg1 sessionIdentifier:(id)arg2 data:(id)arg3 dataType:(id)arg4 bundleIdentifier:(id)arg5 supportedOptions:(unsigned long long)arg6 displayProperties:(id)arg7 ;
-(void)setBOOLValue:(BOOL)arg1 forOption:(long long)arg2 ;
-(BOOL)boolValueForOption:(long long)arg1 ;
-(id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 displayProperties:(id)arg5 ;
-(MPPlaybackArchiveDisplayProperties *)displayProperties;
-(unsigned long long)copyOptions;
-(void)setCopyOptions:(unsigned long long)arg1 ;
-(unsigned long long)queueControlOptions;
-(void)setQueueControlOptions:(unsigned long long)arg1 ;
-(NSString *)playbackSessionIdentifier;
-(NSString *)playbackSessionType;
@end

