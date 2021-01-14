/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, VUIPlistMediaDatabaseSeason, NSDate, NSURL, _TVContentRating, NSString, VUIMediaItemCredits, NSDictionary;

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <NSCopying> {

	NSNumber* _local;
	VUIPlistMediaDatabaseSeason* _season;
	NSNumber* _duration;
	NSDate* _releaseDate;
	NSURL* _previewFrameURL;
	_TVContentRating* _contentRating;
	NSNumber* _colorCapability;
	NSNumber* _HLSColorCapability;
	NSNumber* _episodeNumber;
	NSString* _studio;
	VUIMediaItemCredits* _credits;
	NSURL* _playbackURL;
	NSURL* _filePathURL;
	NSDictionary* _offlineFPSKeys;
	NSString* _downloadState;

}

@property (assign,nonatomic,__weak) VUIPlistMediaDatabaseSeason * season;               //@synthesize season=_season - In the implementation block
@property (getter=isPlayable,nonatomic,copy,readonly) NSNumber * playable; 
@property (nonatomic,copy) NSNumber * duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                        //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSURL * previewFrameURL;                                     //@synthesize previewFrameURL=_previewFrameURL - In the implementation block
@property (nonatomic,copy) _TVContentRating * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy) NSNumber * colorCapability;                                  //@synthesize colorCapability=_colorCapability - In the implementation block
@property (nonatomic,copy) NSNumber * HLSColorCapability;                               //@synthesize HLSColorCapability=_HLSColorCapability - In the implementation block
@property (nonatomic,copy) NSNumber * episodeNumber;                                    //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,copy) NSString * studio;                                           //@synthesize studio=_studio - In the implementation block
@property (nonatomic,copy) VUIMediaItemCredits * credits;                               //@synthesize credits=_credits - In the implementation block
@property (nonatomic,copy) NSURL * playbackURL;                                         //@synthesize playbackURL=_playbackURL - In the implementation block
@property (nonatomic,copy) NSURL * filePathURL;                                         //@synthesize filePathURL=_filePathURL - In the implementation block
@property (nonatomic,copy) NSDictionary * offlineFPSKeys;                               //@synthesize offlineFPSKeys=_offlineFPSKeys - In the implementation block
@property (nonatomic,copy) NSString * downloadState;                                    //@synthesize downloadState=_downloadState - In the implementation block
-(id)isLocal;
-(NSURL *)filePathURL;
-(id)dictionaryRepresentation;
-(NSNumber *)episodeNumber;
-(void)setEpisodeNumber:(NSNumber *)arg1 ;
-(id)isPlayable;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)downloadState;
-(void)setDuration:(NSNumber *)arg1 ;
-(VUIMediaItemCredits *)credits;
-(VUIPlistMediaDatabaseSeason *)season;
-(NSString *)studio;
-(void)setCredits:(VUIMediaItemCredits *)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setSeason:(VUIPlistMediaDatabaseSeason *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setContentRating:(_TVContentRating *)arg1 ;
-(_TVContentRating *)contentRating;
-(void)setDownloadState:(NSString *)arg1 ;
-(void)setStudio:(NSString *)arg1 ;
-(NSNumber *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)HLSColorCapability;
-(NSNumber *)colorCapability;
-(NSURL *)playbackURL;
-(void)setPlaybackURL:(NSURL *)arg1 ;
-(NSURL *)previewFrameURL;
-(NSDictionary *)offlineFPSKeys;
-(void)setPreviewFrameURL:(NSURL *)arg1 ;
-(void)setColorCapability:(NSNumber *)arg1 ;
-(void)setHLSColorCapability:(NSNumber *)arg1 ;
-(void)setFilePathURL:(NSURL *)arg1 ;
-(void)setOfflineFPSKeys:(NSDictionary *)arg1 ;
@end

