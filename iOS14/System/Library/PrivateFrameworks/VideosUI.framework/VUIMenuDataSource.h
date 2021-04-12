/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSArray;

@interface VUIMenuDataSource : NSObject {

	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;

}

@property (nonatomic,retain) NSArray * mainMenuItems;               //@synthesize mainMenuItems=_mainMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * genreMenuItems;              //@synthesize genreMenuItems=_genreMenuItems - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2 ;
-(NSArray *)mainMenuItems;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(NSArray *)genreMenuItems;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
@end

