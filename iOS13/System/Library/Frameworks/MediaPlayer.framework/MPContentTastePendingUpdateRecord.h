/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject {

	NSString* _playlistGlobalID;
	long long _storeAdamID;
	long long _tasteType;
	long long _type;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                    //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) long long tasteType;                      //@synthesize tasteType=_tasteType - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
-(long long)type;
-(NSUUID *)UUID;
-(long long)storeAdamID;
-(id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2 ;
-(id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2 ;
-(void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2 ;
-(NSString *)playlistGlobalID;
-(long long)tasteType;
@end

