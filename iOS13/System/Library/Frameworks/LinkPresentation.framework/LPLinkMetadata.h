/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_group;
@class NSObject, NSMutableArray, NSURL, NSString, LPImage, LPIconMetadata, NSArray, LPImageMetadata, LPVideo, LPVideoMetadata, LPAudio, LPAudioMetadata, LPSpecializationMetadata, NSItemProvider;

@interface LPLinkMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSObject*<OS_dispatch_group> _asynchronousLoadGroup;
	unsigned long long _asynchronousLoadDeferralTokenCount;
	BOOL _wasCopiedFromIncompleteMetadata;
	NSMutableArray* _pendingAsynchronousLoadUpdateHandlers;
	unsigned _version;
	NSURL* _originalURL;
	NSURL* _URL;
	NSString* _title;
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
	LPImage* _icon;
	LPIconMetadata* _iconMetadata;
	LPImage* _image;
	NSArray* _alternateImages;
	LPImageMetadata* _imageMetadata;
	LPVideo* _video;
	LPVideoMetadata* _videoMetadata;
	LPAudio* _audio;
	LPAudioMetadata* _audioMetadata;
	NSArray* _icons;
	NSArray* _images;
	NSArray* _videos;
	NSArray* _streamingVideos;
	NSArray* _audios;
	LPSpecializationMetadata* _specialization;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * summary;                                     //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                                //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * siteName;                                    //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                    //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSURL * relatedURL;                                     //@synthesize relatedURL=_relatedURL - In the implementation block
@property (nonatomic,copy) NSString * creator;                                     //@synthesize creator=_creator - In the implementation block
@property (nonatomic,copy) NSString * creatorFacebookProfile;                      //@synthesize creatorFacebookProfile=_creatorFacebookProfile - In the implementation block
@property (nonatomic,copy) NSString * creatorTwitterUsername;                      //@synthesize creatorTwitterUsername=_creatorTwitterUsername - In the implementation block
@property (nonatomic,copy) NSString * appleContentID;                              //@synthesize appleContentID=_appleContentID - In the implementation block
@property (nonatomic,copy) NSString * appleSummary;                                //@synthesize appleSummary=_appleSummary - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPIconMetadata * iconMetadata;                        //@synthesize iconMetadata=_iconMetadata - In the implementation block
@property (nonatomic,retain) LPImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * alternateImages;                              //@synthesize alternateImages=_alternateImages - In the implementation block
@property (nonatomic,retain) LPImageMetadata * imageMetadata;                      //@synthesize imageMetadata=_imageMetadata - In the implementation block
@property (nonatomic,retain) LPVideo * video;                                      //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) LPVideoMetadata * videoMetadata;                      //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) LPAudio * audio;                                      //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) LPAudioMetadata * audioMetadata;                      //@synthesize audioMetadata=_audioMetadata - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * images;                                       //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSArray * videos;                                       //@synthesize videos=_videos - In the implementation block
@property (nonatomic,copy) NSArray * streamingVideos;                              //@synthesize streamingVideos=_streamingVideos - In the implementation block
@property (nonatomic,copy) NSArray * audios;                                       //@synthesize audios=_audios - In the implementation block
@property (nonatomic,copy) LPSpecializationMetadata * specialization;              //@synthesize specialization=_specialization - In the implementation block
@property (nonatomic,retain) NSURL * originalURL;                                  //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSItemProvider * iconProvider; 
@property (nonatomic,retain) NSItemProvider * imageProvider; 
@property (nonatomic,retain) NSItemProvider * videoProvider; 
@property (nonatomic,retain) NSURL * remoteVideoURL; 
+(BOOL)supportsSecureCoding;
+(id)metadataWithDataRepresentation:(id)arg1 ;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)icons;
-(id)dataRepresentation;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)originalURL;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)selectedText;
-(void)setIconProvider:(NSItemProvider *)arg1 ;
-(void)setImageProvider:(NSItemProvider *)arg1 ;
-(NSString *)creator;
-(void)setCreator:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(LPIconMetadata *)iconMetadata;
-(NSString *)itemType;
-(NSString *)summary;
-(LPVideo *)video;
-(void)setItemType:(NSString *)arg1 ;
-(NSItemProvider *)imageProvider;
-(void)setSpecialization:(LPSpecializationMetadata *)arg1 ;
-(void)_populateMetadataForBackwardCompatibility;
-(void)setSummary:(NSString *)arg1 ;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
-(void)setVideo:(LPVideo *)arg1 ;
-(LPAudio *)audio;
-(LPSpecializationMetadata *)specialization;
-(void)setAudio:(LPAudio *)arg1 ;
-(void)setAudioMetadata:(LPAudioMetadata *)arg1 ;
-(LPAudioMetadata *)audioMetadata;
-(void)setVideoMetadata:(LPVideoMetadata *)arg1 ;
-(LPVideoMetadata *)videoMetadata;
-(unsigned long long)_encodedSize;
-(NSArray *)alternateImages;
-(void)setAlternateImages:(NSArray *)arg1 ;
-(void)_copyPropertiesFrom:(id)arg1 onlyUpgradeFields:(BOOL)arg2 ;
-(NSURL *)relatedURL;
-(void)setRelatedURL:(NSURL *)arg1 ;
-(NSString *)creatorFacebookProfile;
-(void)setCreatorFacebookProfile:(NSString *)arg1 ;
-(NSString *)creatorTwitterUsername;
-(void)setCreatorTwitterUsername:(NSString *)arg1 ;
-(NSString *)appleContentID;
-(void)setAppleContentID:(NSString *)arg1 ;
-(NSString *)appleSummary;
-(void)setAppleSummary:(NSString *)arg1 ;
-(void)setIconMetadata:(LPIconMetadata *)arg1 ;
-(LPImageMetadata *)imageMetadata;
-(void)setImageMetadata:(LPImageMetadata *)arg1 ;
-(NSArray *)videos;
-(void)setVideos:(NSArray *)arg1 ;
-(NSArray *)streamingVideos;
-(void)setStreamingVideos:(NSArray *)arg1 ;
-(NSArray *)audios;
-(void)setAudios:(NSArray *)arg1 ;
-(void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)arg1 ;
-(BOOL)_isLoadingAsynchronousFields;
-(BOOL)_isDeferringAsynchronousLoads;
-(BOOL)_wasCopiedFromIncompleteMetadata;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(BOOL)_loadAsynchronousFieldsWithLoadGroup:(id)arg1 ;
-(void)_reduceSizeByDroppingResourcesIfNeeded;
-(NSItemProvider *)iconProvider;
-(NSItemProvider *)videoProvider;
-(void)setVideoProvider:(NSItemProvider *)arg1 ;
-(NSURL *)remoteVideoURL;
-(void)setRemoteVideoURL:(NSURL *)arg1 ;
-(BOOL)_hasAnyAsynchronousFields;
-(void)_loadAsynchronousFieldsWithUpdateHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_createAsynchronousLoadDeferralToken;
-(void)_invokePendingAsynchronousLoadUpdateHandlers;
-(void)_decodeAllImagesWithMaximumSize:(CGSize)arg1 ;
@end

