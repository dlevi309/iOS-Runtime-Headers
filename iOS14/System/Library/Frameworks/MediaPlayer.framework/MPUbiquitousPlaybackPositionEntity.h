/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject {

	BOOL _hasBeenPlayed;
	NSString* _ubiquitousIdentifier;
	double _bookmarkTimestamp;
	double _bookmarkTime;
	unsigned long long _userPlayCount;

}

@property (nonatomic,copy,readonly) NSString * ubiquitousIdentifier;              //@synthesize ubiquitousIdentifier=_ubiquitousIdentifier - In the implementation block
@property (assign,nonatomic) double bookmarkTimestamp;                            //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                                 //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) unsigned long long userPlayCount;                    //@synthesize userPlayCount=_userPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                                  //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
+(id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1 ;
-(id)initWithUbiquitousIdentifier:(id)arg1 ;
-(void)setBookmarkTimestamp:(double)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setUserPlayCount:(unsigned long long)arg1 ;
-(BOOL)hasBeenPlayedModified;
-(BOOL)userPlayCountModified;
-(BOOL)bookmarkTimeModified;
-(BOOL)bookmarkTimestampModified;
-(id)init;
-(NSString *)ubiquitousIdentifier;
-(double)bookmarkTimestamp;
-(unsigned long long)userPlayCount;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(double)bookmarkTime;
@end

