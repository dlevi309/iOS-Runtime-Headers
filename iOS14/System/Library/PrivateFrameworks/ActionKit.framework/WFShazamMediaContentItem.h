/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)artworkURL;
-(id)artist;
-(WFShazamMedia *)media;
-(id)isExplicit;
-(id)videoURL;
-(id)title;
-(id)appleMusicURL;
-(id)appleMusicID;
-(id)lyricsSnippet;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(id)preferredFileType;
-(void)getArtworkDataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)shazamURL;
-(id)lyricsSnippetSynced;
@end

