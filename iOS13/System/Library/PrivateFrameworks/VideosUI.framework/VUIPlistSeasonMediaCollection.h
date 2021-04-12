/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseSeason;

@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseSeason* _databaseSeason;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseSeason * databaseSeason;              //@synthesize databaseSeason=_databaseSeason - In the implementation block
-(id)showTitle;
-(id)seasonNumber;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3 ;
-(id)mediaItemCount;
-(VUIPlistMediaDatabaseSeason *)databaseSeason;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(void)setDatabaseSeason:(VUIPlistMediaDatabaseSeason *)arg1 ;
@end

