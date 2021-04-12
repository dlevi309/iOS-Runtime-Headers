/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPCPlayerResponse* _response;
	NSIndexPath* _playingItemIndexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSIndexPath * playingItemIndexPath;                 //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlayerResponse *)response;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2 ;
@end

