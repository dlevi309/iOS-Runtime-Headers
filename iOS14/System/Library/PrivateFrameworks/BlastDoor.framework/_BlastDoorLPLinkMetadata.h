/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSItemProvider, _BlastDoorLPImage, _BlastDoorLPIconMetadata, NSArray, _BlastDoorLPImageMetadata, _BlastDoorLPVideo, _BlastDoorLPVideoMetadata, _BlastDoorLPAudio, _BlastDoorLPAudioMetadata, _BlastDoorLPAssociatedApplicationMetadata, _BlastDoorLPSpecializationMetadata;

@interface _BlastDoorLPLinkMetadata : NSObject <NSCopying, NSSecureCoding> {

	unsigned _version;
	NSURL* _originalURL;
	NSURL* _URL;
	NSString* _title;
	NSItemProvider* _iconProvider;
	NSItemProvider* _imageProvider;
	NSItemProvider* _videoProvider;
	NSURL* _remoteVideoURL;
	NSString* _summary;
	NSString* _selectedText;
	NSString* _siteName;
	NSString* _itemType;
	NSURL* _relatedURL;
	NSString* _creator;
	NSString* _creatorFacebookProfile;
	NSString* _creatorTwitterUsername;
	NSString* _appleContentID;
	NSString* _appleSummary;
	_BlastDoorLPImage* _icon;
	_BlastDoorLPIconMetadata* _iconMetadata;
	_BlastDoorLPImage* _image;
	NSArray* _alternateImages;
	_BlastDoorLPImageMetadata* _imageMetadata;
	_BlastDoorLPVideo* _video;
	_BlastDoorLPVideoMetadata* _videoMetadata;
	_BlastDoorLPAudio* _audio;
	_BlastDoorLPAudioMetadata* _audioMetadata;
	NSArray* _icons;
	NSArray* _images;
	NSArray* _videos;
	NSArray* _streamingVideos;
	NSArray* _audios;
	_BlastDoorLPAssociatedApplicationMetadata* _associatedApplication;
	_BlastDoorLPSpecializationMetadata* _specialization;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) unsigned version;                                                           //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * summary;                                                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                                                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * siteName;                                                            //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                                            //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSURL * relatedURL;                                                             //@synthesize relatedURL=_relatedURL - In the implementation block
@property (nonatomic,copy) NSString * creator;                                                             //@synthesize creator=_creator - In the implementation block
@property (nonatomic,copy) NSString * creatorFacebookProfile;                                              //@synthesize creatorFacebookProfile=_creatorFacebookProfile - In the implementation block
@property (nonatomic,copy) NSString * creatorTwitterUsername;                                              //@synthesize creatorTwitterUsername=_creatorTwitterUsername - In the implementation block
@property (nonatomic,copy) NSString * appleContentID;                                                      //@synthesize appleContentID=_appleContentID - In the implementation block
@property (nonatomic,copy) NSString * appleSummary;                                                        //@synthesize appleSummary=_appleSummary - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                                                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) _BlastDoorLPIconMetadata * iconMetadata;                                      //@synthesize iconMetadata=_iconMetadata - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * alternateImages;                                                      //@synthesize alternateImages=_alternateImages - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImageMetadata * imageMetadata;                                    //@synthesize imageMetadata=_imageMetadata - In the implementation block
@property (nonatomic,retain) _BlastDoorLPVideo * video;                                                    //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) _BlastDoorLPVideoMetadata * videoMetadata;                                    //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) _BlastDoorLPAudio * audio;                                                    //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) _BlastDoorLPAudioMetadata * audioMetadata;                                    //@synthesize audioMetadata=_audioMetadata - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                                                //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * images;                                                               //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSArray * videos;                                                               //@synthesize videos=_videos - In the implementation block
@property (nonatomic,copy) NSArray * streamingVideos;                                                      //@synthesize streamingVideos=_streamingVideos - In the implementation block
@property (nonatomic,copy) NSArray * audios;                                                               //@synthesize audios=_audios - In the implementation block
@property (nonatomic,copy) _BlastDoorLPAssociatedApplicationMetadata * associatedApplication;              //@synthesize associatedApplication=_associatedApplication - In the implementation block
@property (nonatomic,copy) _BlastDoorLPSpecializationMetadata * specialization;                            //@synthesize specialization=_specialization - In the implementation block
@property (nonatomic,retain) NSURL * originalURL;                                                          //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSItemProvider * iconProvider;                                                //@synthesize iconProvider=_iconProvider - In the implementation block
@property (nonatomic,retain) NSItemProvider * imageProvider;                                               //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) NSItemProvider * videoProvider;                                               //@synthesize videoProvider=_videoProvider - In the implementation block
@property (nonatomic,retain) NSURL * remoteVideoURL;                                                       //@synthesize remoteVideoURL=_remoteVideoURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithDataRepresentation:(id)arg1 ;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)selectedText;
-(NSURL *)originalURL;
-(void)setVideo:(_BlastDoorLPVideo *)arg1 ;
-(id)dataRepresentation;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(void)setAudioMetadata:(_BlastDoorLPAudioMetadata *)arg1 ;
-(_BlastDoorLPAudioMetadata *)audioMetadata;
-(void)setVideoMetadata:(_BlastDoorLPVideoMetadata *)arg1 ;
-(_BlastDoorLPVideoMetadata *)videoMetadata;
-(id)init;
-(_BlastDoorLPAudio *)audio;
-(NSArray *)icons;
-(unsigned long long)_encodedSize;
-(NSArray *)audios;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSURL *)relatedURL;
-(void)setRelatedURL:(NSURL *)arg1 ;
-(void)_copyPropertiesFrom:(id)arg1 onlyUpgradeFields:(BOOL)arg2 ;
-(NSString *)creatorFacebookProfile;
-(void)setCreatorFacebookProfile:(NSString *)arg1 ;
-(NSString *)creatorTwitterUsername;
-(void)setCreatorTwitterUsername:(NSString *)arg1 ;
-(NSString *)appleContentID;
-(void)setAppleContentID:(NSString *)arg1 ;
-(NSString *)appleSummary;
-(void)setAppleSummary:(NSString *)arg1 ;
-(_BlastDoorLPIconMetadata *)iconMetadata;
-(_BlastDoorLPVideo *)video;
-(void)setIconMetadata:(_BlastDoorLPIconMetadata *)arg1 ;
-(_BlastDoorLPImageMetadata *)imageMetadata;
-(void)setImageMetadata:(_BlastDoorLPImageMetadata *)arg1 ;
-(void)setVideos:(NSArray *)arg1 ;
-(NSArray *)streamingVideos;
-(void)setStreamingVideos:(NSArray *)arg1 ;
-(void)setAudios:(NSArray *)arg1 ;
-(_BlastDoorLPAssociatedApplicationMetadata *)associatedApplication;
-(void)setAssociatedApplication:(_BlastDoorLPAssociatedApplicationMetadata *)arg1 ;
-(void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)arg1 ;
-(NSItemProvider *)videoProvider;
-(void)setVideoProvider:(NSItemProvider *)arg1 ;
-(NSURL *)remoteVideoURL;
-(void)setRemoteVideoURL:(NSURL *)arg1 ;
-(void)setIconProvider:(NSItemProvider *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)siteName;
-(NSString *)creator;
-(_BlastDoorLPImage *)image;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSString *)summary;
-(void)setImageProvider:(NSItemProvider *)arg1 ;
-(void)setSpecialization:(_BlastDoorLPSpecializationMetadata *)arg1 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(void)setCreator:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSItemProvider *)iconProvider;
-(NSArray *)alternateImages;
-(void)setAlternateImages:(NSArray *)arg1 ;
-(_BlastDoorLPSpecializationMetadata *)specialization;
-(NSArray *)images;
-(id)_initWithDictionary:(id)arg1 ;
-(NSItemProvider *)imageProvider;
-(void)setSummary:(NSString *)arg1 ;
-(void)setAudio:(_BlastDoorLPAudio *)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(void)setSiteName:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)videos;
@end

