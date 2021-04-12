/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString, NSArray;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand {

	NSString* _currentPlaybackSessionIdentifier;
	NSArray* _exportableSessionTypes;
	NSArray* _supportedSessionTypes;

}

@property (nonatomic,copy) NSString * currentPlaybackSessionIdentifier;              //@synthesize currentPlaybackSessionIdentifier=_currentPlaybackSessionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * exportableSessionTypes;                         //@synthesize exportableSessionTypes=_exportableSessionTypes - In the implementation block
@property (nonatomic,copy) NSArray * supportedSessionTypes;                          //@synthesize supportedSessionTypes=_supportedSessionTypes - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentPlaybackSessionIdentifier:(NSString *)arg1 ;
-(void)setExportableSessionTypes:(NSArray *)arg1 ;
-(void)setSupportedSessionTypes:(NSArray *)arg1 ;
-(NSString *)currentPlaybackSessionIdentifier;
-(NSArray *)exportableSessionTypes;
-(NSArray *)supportedSessionTypes;
@end

