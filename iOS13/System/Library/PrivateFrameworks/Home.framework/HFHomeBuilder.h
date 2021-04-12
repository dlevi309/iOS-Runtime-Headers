/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder;

@interface HFHomeBuilder : HFItemBuilder {

	NSString* _name;
	NSString* _userNotes;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userNotes;                                               //@synthesize userNotes=_userNotes - In the implementation block
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setHome:(id)arg1 ;
-(id)updateName;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)performValidation;
-(id)createHome;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(id)updateUserNotes;
-(NSString *)userNotes;
-(void)setUserNotes:(NSString *)arg1 ;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
@end

