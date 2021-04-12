/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {

	ICStorePlatformMetadata* _storeItem;
	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
-(NSDictionary *)lookupDictionary;
-(id)storeItem;
-(id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2 ;
@end

