/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

