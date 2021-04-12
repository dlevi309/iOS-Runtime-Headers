/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/


#import <CarPlayUI/CarPlayUI-Structs.h>
@class NSString, MPArtworkCatalog, MPCPlayerResponseTracklist, MPModelSong, MPCPlayerResponse, MPCPlayerResponseItem, NSNumber;

@interface CPUINowPlayingSnapshot : NSObject {

	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	MPArtworkCatalog* _artworkCatalog;
	long long _state;
	MPCPlayerResponseTracklist* _tracklist;
	MPModelSong* _song;
	MPCPlayerResponse* _response;
	MPCPlayerResponseItem* _responseItem;
	SCD_Struct_CP1 _durationSnapshot;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * artist;                                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) NSString * album;                                    //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog;                   //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CP1 durationSnapshot;                     //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseTracklist * tracklist;              //@synthesize tracklist=_tracklist - In the implementation block
@property (nonatomic,readonly) MPModelSong * song;                                  //@synthesize song=_song - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseItem * responseItem;                //@synthesize responseItem=_responseItem - In the implementation block
@property (nonatomic,readonly) NSNumber * jumpBackInterval; 
@property (nonatomic,readonly) NSNumber * jumpForwardInterval; 
@property (nonatomic,readonly) BOOL shouldEnableBackButton; 
@property (nonatomic,readonly) BOOL shouldEnableNextButton; 
+(id)knownJumpIntervals;
-(MPModelSong *)song;
-(NSString *)artist;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(MPCPlayerResponse *)response;
-(MPCPlayerResponseItem *)responseItem;
-(NSString *)album;
-(long long)state;
-(MPArtworkCatalog *)artworkCatalog;
-(MPCPlayerResponseTracklist *)tracklist;
-(SCD_Struct_CP1)durationSnapshot;
-(NSString *)title;
-(BOOL)shouldEnableNextButton;
-(id)commandWithType:(unsigned long long)arg1 ;
-(NSNumber *)jumpBackInterval;
-(NSNumber *)jumpForwardInterval;
-(BOOL)shouldEnableBackButton;
@end

