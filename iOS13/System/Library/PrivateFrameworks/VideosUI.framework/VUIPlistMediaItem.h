/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseItem* _databaseItem;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseItem * databaseItem;              //@synthesize databaseItem=_databaseItem - In the implementation block
-(id)isLocal;
-(id)assetType;
-(id)showTitle;
-(id)seasonNumber;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseItem *)databaseItem;
-(void)setDatabaseItem:(VUIPlistMediaDatabaseItem *)arg1 ;
@end

