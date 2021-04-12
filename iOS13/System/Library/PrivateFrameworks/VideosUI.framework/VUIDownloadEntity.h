/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityAssetControllerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;
@class NSObject, NSArray, NSString, NSNumber;

@interface VUIDownloadEntity : NSObject <VUIMediaEntityAssetControllerDelegate, NSCopying> {

	id<VUIDownloadEntityDelegate> _delegate;
	long long _downloadType;
	NSObject*<VUIMediaEntityIdentifier> _showIdentifier;
	NSArray* _mediaEntities;
	NSString* _title;
	NSNumber* _releaseYear;
	NSNumber* _duration;
	NSNumber* _episodeNumber;
	NSNumber* _numberOfMediaItems;
	NSNumber* _numberOfMediaItemsDownloading;

}

@property (assign,nonatomic,__weak) id<VUIDownloadEntityDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long downloadType;                                          //@synthesize downloadType=_downloadType - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityIdentifier> showIdentifier;              //@synthesize showIdentifier=_showIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * mediaEntities;                                         //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * releaseYear;                                          //@synthesize releaseYear=_releaseYear - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * episodeNumber;                                        //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfMediaItems;                                   //@synthesize numberOfMediaItems=_numberOfMediaItems - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfMediaItemsDownloading;                        //@synthesize numberOfMediaItemsDownloading=_numberOfMediaItemsDownloading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<VUIDownloadEntityDelegate>)delegate;
-(void)setDelegate:(id<VUIDownloadEntityDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)episodeNumber;
-(void)setEpisodeNumber:(NSNumber *)arg1 ;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(NSNumber *)releaseYear;
-(long long)downloadType;
-(void)setDownloadType:(long long)arg1 ;
-(NSNumber *)numberOfMediaItems;
-(NSArray *)mediaEntities;
-(id)initWithMediaEntity:(id)arg1 withDownloadType:(long long)arg2 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2 ;
-(NSObject*<VUIMediaEntityIdentifier>)showIdentifier;
-(NSNumber *)numberOfMediaItemsDownloading;
-(id)initWithMediaEntities:(id)arg1 withDownloadType:(long long)arg2 ;
-(void)_configureWithMediaEntities:(id)arg1 ;
-(void)setNumberOfMediaItems:(NSNumber *)arg1 ;
-(void)setShowIdentifier:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(void)setNumberOfMediaItemsDownloading:(NSNumber *)arg1 ;
@end

