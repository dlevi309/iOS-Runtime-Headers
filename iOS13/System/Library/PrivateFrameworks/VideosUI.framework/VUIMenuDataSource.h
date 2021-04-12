/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUIMenuDataSource : NSObject {

	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;

}

@property (nonatomic,retain) NSArray * mainMenuItems;               //@synthesize mainMenuItems=_mainMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * genreMenuItems;              //@synthesize genreMenuItems=_genreMenuItems - In the implementation block
-(id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2 ;
-(NSArray *)mainMenuItems;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(NSArray *)genreMenuItems;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
@end

