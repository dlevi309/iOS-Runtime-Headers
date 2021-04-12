/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPLinkMetadata, NSURL, LPImage, NSString;

@interface LPLinkMetadataPresentationTransformer : NSObject {

	BOOL _complete;
	BOOL _allowsTapToLoad;
	BOOL _allowsTapping;
	LPLinkMetadata* _metadata;
	NSURL* _URL;
	unsigned long long _preferredSizeClass;
	LPImage* _sourceContextIcon;
	NSString* _sourceBundleIdentifier;
	double _scaleFactor;

}

@property (nonatomic,copy) LPLinkMetadata * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                          //@synthesize URL=_URL - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;                    //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL allowsTapToLoad;                               //@synthesize allowsTapToLoad=_allowsTapToLoad - In the implementation block
@property (assign,nonatomic) BOOL allowsTapping;                                 //@synthesize allowsTapping=_allowsTapping - In the implementation block
@property (assign,nonatomic) unsigned long long preferredSizeClass;              //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,retain) LPImage * sourceContextIcon;                        //@synthesize sourceContextIcon=_sourceContextIcon - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                 //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
@property (nonatomic,readonly) BOOL hasMedia; 
-(void)setScaleFactor:(double)arg1 ;
-(BOOL)isComplete;
-(NSURL *)originalURL;
-(id)domainName;
-(double)scaleFactor;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)setAllowsTapToLoad:(BOOL)arg1 ;
-(id)presentationProperties;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)canonicalURL;
-(id)commonPresentationPropertiesForStyle:(long long)arg1 ;
-(void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2 ;
-(void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 ;
-(unsigned long long)_rowConfiguration;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(id)unspecializedPresentationProperties;
-(id)domainNameForIndicator;
-(id)unspecializedPresentationPropertiesForStyle:(long long)arg1 ;
-(void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3 ;
-(BOOL)_prefersImageAsIconWithStyle:(long long)arg1 ;
-(void)setPreferredSizeClass:(unsigned long long)arg1 ;
-(void)setAllowsTapping:(BOOL)arg1 ;
-(BOOL)shouldUseAppClipPresentation;
-(id)titleForStyle:(long long)arg1 ;
-(id)subtitleForStyle:(long long)arg1 ;
-(id)videoForStyle:(long long)arg1 ;
-(id)quotedTextForStyle:(long long)arg1 ;
-(LPImage *)sourceContextIcon;
-(long long)rendererStyle;
-(id)audioForStyle:(long long)arg1 ;
-(id)mainCaptionBarForStyle:(long long)arg1 ;
-(id)backgroundColorForStyle:(long long)arg1 ;
-(id)imageForStyle:(long long)arg1 icon:(id*)arg2 alternateImages:(id*)arg3 ;
-(BOOL)_prefersLeadingIconWithStyle:(long long)arg1 ;
-(BOOL)_prefersIconAsImage;
-(BOOL)allowsTapToLoad;
-(BOOL)allowsTapping;
-(void)setSourceContextIcon:(LPImage *)arg1 ;
-(NSURL *)URL;
-(BOOL)hasMedia;
-(void)setComplete:(BOOL)arg1 ;
-(unsigned long long)preferredSizeClass;
-(LPLinkMetadata *)metadata;
@end

