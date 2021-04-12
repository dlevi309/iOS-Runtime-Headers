/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData {

	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
+(id)_importPropertiesDictFromImportMetadataDict:(id)arg1 ;
-(id)initWithImportElements:(id)arg1 ;
-(id)parsedStoreItemsImportProperties;
-(id)_associatedElementForPropertyDict:(id)arg1 ;
-(NSArray *)importElements;
@end

