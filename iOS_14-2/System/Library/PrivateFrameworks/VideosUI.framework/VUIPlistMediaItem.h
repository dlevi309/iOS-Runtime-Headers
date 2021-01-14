/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)seasonNumber;
-(id)assetType;
-(id)showTitle;
-(id)seasonIdentifier;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseItem *)databaseItem;
-(void)setDatabaseItem:(VUIPlistMediaDatabaseItem *)arg1 ;
@end

