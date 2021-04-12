/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson

@property (nonatomic,copy) NSString * shortName; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) long long curatorKind; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) id brandLogoArtworkCatalogBlock; 
@property (nonatomic,copy) NSString * handle; 
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__shortName_KEY;
+(id)__curatorKind_KEY;
+(id)__brandLogoArtworkCatalogBlock_KEY;
+(id)__handle_KEY;
-(id)editorialArtworkCatalog;
-(id)brandLogoArtworkCatalog;
@end

