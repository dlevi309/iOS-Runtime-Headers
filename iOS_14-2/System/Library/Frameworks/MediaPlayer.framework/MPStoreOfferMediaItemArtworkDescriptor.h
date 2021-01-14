/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSDictionary, NSArray, NSString;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <MPArtworkDataSourceVisualIdenticality> {

	long long _itemPersistentID;
	NSDictionary* _screenshotURLs;
	NSDictionary* _itemArtworkURLs;
	NSDictionary* _containerArtworkURLs;
	NSArray* _screenshotSizes;
	NSArray* _itemArtworkSizes;
	NSArray* _containerArtworkSizes;
	unsigned long long _hash;
	NSString* _cacheID;

}

@property (nonatomic,readonly) NSString * cacheID;                  //@synthesize cacheID=_cacheID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4 ;
-(id)stringRepresentation;
-(NSString *)cacheID;
-(id)artworkURLForSize:(CGSize)arg1 type:(long long)arg2 ;
-(id)availableSizesForArtworkOfType:(long long)arg1 ;
-(id)_preferredArtworkURLsForType:(long long)arg1 ;
-(id)_availableSizesForArtworkURLs:(id)arg1 ;
-(id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

