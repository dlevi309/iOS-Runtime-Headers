/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(unsigned long long)arg1 ;
-(BOOL)isAvailableForAnonymousDownload;
-(LPAudio *)audio;
-(NSString *)storefrontIdentifier;
-(NSURL *)previewURL;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setOffers:(NSArray *)arg1 ;
-(unsigned long long)availability;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(unsigned long long)type;
-(void)setAudio:(LPAudio *)arg1 ;
-(NSArray *)offers;
-(NSString *)storeIdentifier;
@end

