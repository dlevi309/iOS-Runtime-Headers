/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseShow;

@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseShow* _databaseShow;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseShow * databaseShow;              //@synthesize databaseShow=_databaseShow - In the implementation block
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3 ;
-(id)mediaItemCount;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseShow *)databaseShow;
-(void)setDatabaseShow:(VUIPlistMediaDatabaseShow *)arg1 ;
@end

