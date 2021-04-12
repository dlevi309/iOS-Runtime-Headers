/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _artworkConfigurationDictionary;
	NSMutableDictionary* _supportedSizesCache;
	double _mainScreenScale;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                   //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkConfigurationDictionary;              //@synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedSizesCache;                  //@synthesize supportedSizesCache=_supportedSizesCache - In the implementation block
@property (assign,nonatomic) double mainScreenScale;                                     //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(double)mainScreenScale;
-(void)setMainScreenScale:(double)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)supportedSizesCache;
-(id)_supportedSizeKeysForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSDictionary *)artworkConfigurationDictionary;
-(void)setArtworkConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setSupportedSizesCache:(NSMutableDictionary *)arg1 ;
@end

