/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)previewImage;
-(NSString *)themeID;
-(NSString *)displayName;
-(id)posterImage;
-(id)musicName;
-(id)micaFileBaseName;
-(id)micaFileNameForTitleNamed:(id)arg1 ;
-(id)initWithThemeID:(id)arg1 ;
-(NSString *)trailerID;
-(id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2 ;
-(id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2 ;
-(id)displayNameForTransitionName:(id)arg1 ;
@end

