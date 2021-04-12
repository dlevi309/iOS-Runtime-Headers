/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

