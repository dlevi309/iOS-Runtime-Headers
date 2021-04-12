/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString, UIImage;

@interface Theme : NSObject {

	NSString* m_themeID;

}

@property (nonatomic,readonly) NSString * themeID; 
@property (nonatomic,readonly) NSString * trailerID; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)themeIDIsTrailer:(id)arg1 ;
+(id)themeWithID:(id)arg1 ;
+(id)trailerIDFromThemeID:(id)arg1 ;
+(id)themeIDs;
+(id)themeIDFromTrailerID:(id)arg1 ;
-(NSString *)displayName;
-(UIImage *)previewImage;
-(id)posterImage;
-(id)musicName;
-(id)micaFileBaseName;
-(NSString *)themeID;
-(id)micaFileNameForTitleNamed:(id)arg1 ;
-(id)initWithThemeID:(id)arg1 ;
-(NSString *)trailerID;
-(id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2 ;
-(id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2 ;
-(id)displayNameForTransitionName:(id)arg1 ;
@end

