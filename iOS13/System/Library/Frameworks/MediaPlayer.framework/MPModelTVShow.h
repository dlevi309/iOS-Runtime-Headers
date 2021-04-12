/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)__title_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__tagline_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__episodesCount_KEY;
+(id)kindWithSeasonKind:(id)arg1 ;
+(id)__shortTitle_KEY;
+(id)__creator_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
@end

