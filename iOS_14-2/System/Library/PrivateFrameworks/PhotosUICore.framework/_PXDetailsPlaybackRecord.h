/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord {

	PXTileIdentifier _tileIdentifier;

}

@property (nonatomic,readonly) id<_PXDetailsAutoplayTile> geometryReference; 
@property (assign,nonatomic) PXTileIdentifier tileIdentifier;                             //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void)setTileIdentifier:(PXTileIdentifier)arg1 ;
-(PXTileIdentifier)tileIdentifier;
@end

