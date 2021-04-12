/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryDataSource.h>

@class VUIMenuDataSource, NSSet;

@interface VUILibraryMenuDataSource : VUILibraryDataSource {

	VUIMenuDataSource* _menuItems;
	NSSet* _validCategories;

}

@property (nonatomic,retain) VUIMenuDataSource * menuItems;              //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,retain) NSSet * validCategories;                    //@synthesize validCategories=_validCategories - In the implementation block
-(void)setMenuItems:(VUIMenuDataSource *)arg1 ;
-(VUIMenuDataSource *)menuItems;
-(id)initWithValidCategories:(id)arg1 ;
-(NSSet *)validCategories;
-(void)setValidCategories:(NSSet *)arg1 ;
@end

