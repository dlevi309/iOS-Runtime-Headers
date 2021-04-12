/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPStoreItemMetadata *)storeItemMetadata;
-(id)initWithStoreItemMetadata:(id)arg1 ;
-(id)_valueFromMetadataForProperty:(id)arg1 ;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)artworkCatalog;
@end

