/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPMediaLibraryAlbumAppData;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	MPMediaLibraryAlbumAppData* _albumAppData;

}

@property (nonatomic,retain) MPModelObject * modelObject;                            //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibraryAlbumAppData * albumAppData;              //@synthesize albumAppData=_albumAppData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPMediaLibraryAlbumAppData *)albumAppData;
-(void)setAlbumAppData:(MPMediaLibraryAlbumAppData *)arg1 ;
@end

