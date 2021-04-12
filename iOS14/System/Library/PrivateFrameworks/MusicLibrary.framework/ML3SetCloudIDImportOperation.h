/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {

	NSArray* _trackInfo;
	NSArray* _playlistInfo;

}
-(void)main;
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_importTracksUsingImportSession:(ML3ImportSession*)arg1 ;
-(BOOL)_importPlaylistsUsingImportSession:(ML3ImportSession*)arg1 ;
@end

