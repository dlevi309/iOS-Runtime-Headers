/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentShareURLProvider.h>

@class NSString, SXDocument, SXJSONObjectMerger, SXImageController, NSMutableDictionary, SXMetaData, UIColor;

@interface SXDocumentController : NSObject <SXDocumentShareURLProvider> {

	NSString* _shareURL;
	SXDocument* _document;
	SXJSONObjectMerger* _componentStyleMerger;
	SXImageController* _imageController;
	NSMutableDictionary* _componentStyles;

}

@property (nonatomic,readonly) SXJSONObjectMerger * componentStyleMerger;              //@synthesize componentStyleMerger=_componentStyleMerger - In the implementation block
@property (nonatomic,retain) SXImageController * imageController;                      //@synthesize imageController=_imageController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentStyles;                    //@synthesize componentStyles=_componentStyles - In the implementation block
@property (nonatomic,readonly) SXDocument * document;                                  //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) SXMetaData * metaData; 
@property (nonatomic,readonly) UIColor * documentBackgroundColor; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * shareURL;                                    //@synthesize shareURL=_shareURL - In the implementation block
-(SXDocument *)document;
-(NSString *)shareURL;
-(SXMetaData *)metaData;
-(UIColor *)topBackgroundColor;
-(UIColor *)documentBackgroundColor;
-(id)requiredResourceURLs;
-(id)componentLayoutForIdentifier:(id)arg1 ;
-(id)componentStyleForComponent:(id)arg1 ;
-(id)resourceForIdentifier:(id)arg1 ;
-(id)imageResourceForIdentifier:(id)arg1 ;
-(id)initWithDocument:(id)arg1 shareURL:(id)arg2 ;
-(NSMutableDictionary *)componentStyles;
-(SXJSONObjectMerger *)componentStyleMerger;
-(id)mergedObjectsWithIdentifiers:(id)arg1 fromDictionary:(id)arg2 merger:(id)arg3 ;
-(SXImageController *)imageController;
-(id)allImageResources;
-(id)filterImageResources;
-(id)componentIdentifierUsingThumbnailInComponents:(id)arg1 ;
-(id)componentIdentifierUsingThumbnail;
-(void)setImageController:(SXImageController *)arg1 ;
-(void)setComponentStyles:(NSMutableDictionary *)arg1 ;
@end

