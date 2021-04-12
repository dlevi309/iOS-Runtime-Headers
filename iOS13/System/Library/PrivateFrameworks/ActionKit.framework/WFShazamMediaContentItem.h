/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFShazamMedia;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFShazamMedia * media; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
-(id)title;
-(id)artist;
-(id)adamID;
-(id)videoURL;
-(WFShazamMedia *)media;
-(id)artworkURL;
-(id)isExplicit;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(id)preferredFileType;
-(void)getArtworkDataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)shazamURL;
-(id)appleMusicURL;
-(id)lyricsSnippet;
-(id)lyricsSnippetSynced;
@end

