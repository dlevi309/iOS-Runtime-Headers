/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VUIMenuDataSource *)menuItems;
-(void)setMenuItems:(VUIMenuDataSource *)arg1 ;
-(id)initWithValidCategories:(id)arg1 ;
-(NSSet *)validCategories;
-(void)setValidCategories:(NSSet *)arg1 ;
@end

