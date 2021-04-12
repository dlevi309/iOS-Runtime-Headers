/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject {

	long long _version;
	NSDictionary* _appDataDict;
	NSMutableDictionary* _dirtyPopularityDict;

}

@property (nonatomic,readonly) long long version;              //@synthesize version=_version - In the implementation block
-(id)init;
-(long long)version;
-(id)initWithAppDataDictionary:(id)arg1 ;
-(void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2 ;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2 ;
-(id)songPopularityForAdamID:(long long)arg1 ;
-(id)createAppDataDictionary;
@end

