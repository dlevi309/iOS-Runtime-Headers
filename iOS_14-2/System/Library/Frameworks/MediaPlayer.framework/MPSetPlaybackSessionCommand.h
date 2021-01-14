/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString, NSArray;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand {

	NSString* _currentPlaybackSessionIdentifier;
	NSString* _currentPlaybackSessionRevision;
	NSArray* _exportableSessionTypes;
	NSArray* _supportedSessionTypes;

}

@property (nonatomic,copy) NSString * currentPlaybackSessionIdentifier;              //@synthesize currentPlaybackSessionIdentifier=_currentPlaybackSessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentPlaybackSessionRevision;                //@synthesize currentPlaybackSessionRevision=_currentPlaybackSessionRevision - In the implementation block
@property (nonatomic,copy) NSArray * exportableSessionTypes;                         //@synthesize exportableSessionTypes=_exportableSessionTypes - In the implementation block
@property (nonatomic,copy) NSArray * supportedSessionTypes;                          //@synthesize supportedSessionTypes=_supportedSessionTypes - In the implementation block
-(NSArray *)supportedSessionTypes;
-(void)setSupportedSessionTypes:(NSArray *)arg1 ;
-(NSArray *)exportableSessionTypes;
-(void)setCurrentPlaybackSessionRevision:(NSString *)arg1 ;
-(NSString *)currentPlaybackSessionRevision;
-(void)setCurrentPlaybackSessionIdentifier:(NSString *)arg1 ;
-(void)setExportableSessionTypes:(NSArray *)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(NSString *)currentPlaybackSessionIdentifier;
@end

