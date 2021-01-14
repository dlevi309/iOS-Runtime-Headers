/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelTVShowCreator;

@interface MPModelTVShow : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MPModelTVShowCreator * creator; 
@property (nonatomic,copy) NSString * shortTitle; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (nonatomic,copy) NSString * tagline; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (assign,nonatomic) long long episodesCount; 
+(id)__editorNotes_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__episodesCount_KEY;
+(id)__shortTitle_KEY;
+(id)__creator_KEY;
+(id)__title_KEY;
+(id)__tagline_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)kindWithSeasonKind:(id)arg1 ;
-(id)editorialArtworkCatalog;
-(id)artworkCatalog;
-(id)humanDescription;
@end

