/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation
-(BOOL)_execute:(id*)arg1 ;
-(unsigned long long)type;
-(id)initWithLibrary:(id)arg1 writer:(id)arg2 ;
-(BOOL)_processTrackAsset:(id)arg1 forSource:(int)arg2 withError:(id*)arg3 ;
-(BOOL)_processContainerAsset:(id)arg1 forSource:(int)arg2 withError:(id*)arg3 ;
-(long long)_artworkSourceFromTrackSource:(int)arg1 ;
-(BOOL)_processArtworkIdentifier:(id)arg1 artworkToken:(id)arg2 artworkType:(long long)arg3 mediaType:(unsigned)arg4 sourceType:(long long)arg5 ;
-(double)_videoSnapshotTimeForMediaType:(unsigned)arg1 ;
-(BOOL)_processGeniusPlist:(id)arg1 geniusIDString:(id)arg2 geniusChecksum:(long long)arg3 ;
@end

