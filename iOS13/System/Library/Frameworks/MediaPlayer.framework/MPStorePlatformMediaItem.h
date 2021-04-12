/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem {

	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MPStoreItemMetadata * storeItemMetadata;              //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultPropertyValues;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)artworkCatalog;
-(id)initWithStoreItemMetadata:(id)arg1 ;
-(id)_valueFromMetadataForProperty:(id)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
@end

