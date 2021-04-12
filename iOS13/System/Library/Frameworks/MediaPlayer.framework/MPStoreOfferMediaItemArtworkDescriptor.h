/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4 ;
-(id)artworkURLForSize:(CGSize)arg1 type:(long long)arg2 ;
-(id)availableSizesForArtworkOfType:(long long)arg1 ;
-(id)_preferredArtworkURLsForType:(long long)arg1 ;
-(id)_availableSizesForArtworkURLs:(id)arg1 ;
-(id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1 ;
-(NSString *)cacheID;
@end

