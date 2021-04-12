/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class MTPAFPlaylist, MTPAFKit;

@interface MTPAFPlaylistKitBinding : NSObject {

	MTPAFPlaylist* _playlist;
	MTPAFKit* _pafKit;

}

@property (nonatomic,retain) MTPAFPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MTPAFKit * pafKit;                     //@synthesize pafKit=_pafKit - In the implementation block
-(MTPAFKit *)pafKit;
-(MTPAFPlaylist *)playlist;
-(void)setPlaylist:(MTPAFPlaylist *)arg1 ;
-(void)setPafKit:(MTPAFKit *)arg1 ;
@end

