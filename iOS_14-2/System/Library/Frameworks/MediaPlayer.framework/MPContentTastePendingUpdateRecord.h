/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)UUID;
-(id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2 ;
-(id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2 ;
-(void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2 ;
-(long long)storeAdamID;
-(long long)type;
-(NSString *)playlistGlobalID;
-(long long)tasteType;
@end

