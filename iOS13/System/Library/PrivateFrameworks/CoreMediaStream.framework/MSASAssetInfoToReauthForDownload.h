/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class MSAsset, MSASAlbum;

@interface MSASAssetInfoToReauthForDownload : NSObject {

	MSAsset* _asset;
	MSASAlbum* _album;

}

@property (nonatomic,retain) MSAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;              //@synthesize album=_album - In the implementation block
-(MSASAlbum *)album;
-(MSAsset *)asset;
-(void)setAsset:(MSAsset *)arg1 ;
-(void)setAlbum:(MSASAlbum *)arg1 ;
@end

