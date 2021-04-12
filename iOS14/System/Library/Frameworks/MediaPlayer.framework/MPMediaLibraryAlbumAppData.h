/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAppDataDictionary:(id)arg1 ;
-(void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2 ;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2 ;
-(id)songPopularityForAdamID:(long long)arg1 ;
-(id)createAppDataDictionary;
-(long long)version;
@end

