/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPLinkMetadataStoreTransformer.h>

@class NSString, LPImage, NSArray, LPVideo;

@interface LPiTunesMediaSoftwareMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer> {

	BOOL _isMessagesOnlyApp;
	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _subtitle;
	NSString* _genre;
	NSString* _platform;
	LPImage* _icon;
	NSArray* _screenshots;
	LPVideo* _previewVideo;
	LPImage* _messagesAppIcon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * platform;                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) LPImage * icon;                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSArray * screenshots;                        //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,retain) LPVideo * previewVideo;                     //@synthesize previewVideo=_previewVideo - In the implementation block
@property (assign,nonatomic) BOOL isMessagesOnlyApp;                     //@synthesize isMessagesOnlyApp=_isMessagesOnlyApp - In the implementation block
@property (nonatomic,retain) LPImage * messagesAppIcon;                  //@synthesize messagesAppIcon=_messagesAppIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)genre;
-(NSString *)subtitle;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setGenre:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSArray *)screenshots;
-(void)setScreenshots:(NSArray *)arg1 ;
-(LPVideo *)previewVideo;
-(void)setPreviewVideo:(LPVideo *)arg1 ;
-(BOOL)isMessagesOnlyApp;
-(void)setIsMessagesOnlyApp:(BOOL)arg1 ;
-(LPImage *)messagesAppIcon;
-(void)setMessagesAppIcon:(LPImage *)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(id)storeIdentifierForTransformer:(id)arg1 ;
@end

