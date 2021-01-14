/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, NSNumber, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _subtitle;
	NSString* _genre;
	NSString* _platform;
	NSNumber* _isHiddenFromSpringboard;
	NSNumber* _hasMessagesExtension;
	LPiTunesMediaAsset* _icon;
	LPiTunesMediaAsset* _messagesAppIcon;
	NSArray* _screenshots;
	LPiTunesMediaAsset* _previewVideo;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                     //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * platform;                                 //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSNumber * isHiddenFromSpringboard;                  //@synthesize isHiddenFromSpringboard=_isHiddenFromSpringboard - In the implementation block
@property (nonatomic,copy) NSNumber * hasMessagesExtension;                     //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * messagesAppIcon;              //@synthesize messagesAppIcon=_messagesAppIcon - In the implementation block
@property (nonatomic,retain) NSArray * screenshots;                             //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * previewVideo;                 //@synthesize previewVideo=_previewVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)genre;
-(NSString *)platform;
-(NSString *)storeFrontIdentifier;
-(void)setPlatform:(NSString *)arg1 ;
-(NSArray *)screenshots;
-(void)setScreenshots:(NSArray *)arg1 ;
-(LPiTunesMediaAsset *)previewVideo;
-(void)setPreviewVideo:(LPiTunesMediaAsset *)arg1 ;
-(LPiTunesMediaAsset *)messagesAppIcon;
-(void)setMessagesAppIcon:(LPiTunesMediaAsset *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(LPiTunesMediaAsset *)icon;
-(NSString *)subtitle;
-(void)setIcon:(LPiTunesMediaAsset *)arg1 ;
-(void)setHasMessagesExtension:(NSNumber *)arg1 ;
-(id)assetsToFetch;
-(NSNumber *)isHiddenFromSpringboard;
-(void)setIsHiddenFromSpringboard:(NSNumber *)arg1 ;
-(NSString *)name;
-(NSNumber *)hasMessagesExtension;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)resolve;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
@end

