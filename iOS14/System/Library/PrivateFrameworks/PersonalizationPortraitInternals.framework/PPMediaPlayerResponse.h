/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, NSNumber;

@interface PPMediaPlayerResponse : NSObject {

	unsigned _state;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	NSString* _bundleID;
	NSString* _playerID;
	NSNumber* _storeItemID;
	double _duration;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) NSString * album;                    //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * playerID;                 //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSNumber * storeItemID;              //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,nonatomic) unsigned state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
-(NSString *)playerID;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(void)setDuration:(double)arg1 ;
-(NSString *)artist;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(NSString *)album;
-(unsigned)state;
-(void)setArtist:(NSString *)arg1 ;
-(double)duration;
-(void)setPlayerID:(NSString *)arg1 ;
-(NSString *)title;
@end

