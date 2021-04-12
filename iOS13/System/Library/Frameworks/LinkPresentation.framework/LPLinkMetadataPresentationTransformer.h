/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPLinkMetadata, NSURL, LPImage, NSString;

@interface LPLinkMetadataPresentationTransformer : NSObject {

	BOOL _complete;
	BOOL _allowsTapToLoad;
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
@property (assign,nonatomic) unsigned long long preferredSizeClass;              //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,retain) LPImage * sourceContextIcon;                        //@synthesize sourceContextIcon=_sourceContextIcon - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                 //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
@property (nonatomic,readonly) BOOL hasMedia; 
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSURL *)originalURL;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)hasMedia;
-(void)setAllowsTapToLoad:(BOOL)arg1 ;
-(id)presentationProperties;
-(NSURL *)canonicalURL;
-(id)commonPresentationPropertiesForStyle:(long long)arg1 ;
-(void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2 ;
-(unsigned long long)preferredSizeClass;
-(unsigned long long)_rowConfiguration;
-(id)unspecializedPresentationProperties;
-(id)unspecializedPresentationPropertiesForStyle:(long long)arg1 ;
-(void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3 ;
-(BOOL)_prefersImageAsIconWithStyle:(long long)arg1 ;
-(void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 ;
-(void)setPreferredSizeClass:(unsigned long long)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(id)titleForStyle:(long long)arg1 ;
-(id)subtitleForStyle:(long long)arg1 ;
-(id)videoForStyle:(long long)arg1 ;
-(id)quotedTextForStyle:(long long)arg1 ;
-(LPImage *)sourceContextIcon;
-(long long)rendererStyle;
-(id)mainCaptionBarForStyle:(long long)arg1 ;
-(id)backgroundColorForStyle:(long long)arg1 ;
-(id)imageForStyle:(long long)arg1 icon:(id*)arg2 alternateImages:(id*)arg3 ;
-(BOOL)_prefersLeadingIconWithStyle:(long long)arg1 ;
-(id)audioForStyle:(long long)arg1 ;
-(BOOL)_prefersIconAsImage;
-(BOOL)allowsTapToLoad;
-(void)setSourceContextIcon:(LPImage *)arg1 ;
-(NSString *)sourceBundleIdentifier;
@end

