/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSString, NSArray, NSURL, LPAudio;

@interface LPInlineMediaPlaybackInformation : NSObject {

	unsigned long long _type;
	NSString* _storeIdentifier;
	NSString* _storefrontIdentifier;
	NSArray* _offers;
	NSURL* _previewURL;
	NSString* _persistentIdentifier;
	LPAudio* _audio;

}

@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (nonatomic,readonly) BOOL isAvailableForAnonymousDownload; 
@property (nonatomic,copy) NSURL * previewURL;                                    //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) LPAudio * audio;                                     //@synthesize audio=_audio - In the implementation block
-(unsigned long long)type;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(unsigned long long)availability;
-(NSURL *)previewURL;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(LPAudio *)audio;
-(BOOL)isAvailableForAnonymousDownload;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(void)setAudio:(LPAudio *)arg1 ;
@end

