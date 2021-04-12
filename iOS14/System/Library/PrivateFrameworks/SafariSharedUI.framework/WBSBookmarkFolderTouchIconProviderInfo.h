/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSArray, UIImage;

@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject {

	NSArray* _thumbnailImages;
	NSArray* _backgroundColors;
	UIImage* _touchIcon;

}

@property (nonatomic,copy,readonly) NSArray * thumbnailImages;               //@synthesize thumbnailImages=_thumbnailImages - In the implementation block
@property (nonatomic,copy,readonly) NSArray * backgroundColors;              //@synthesize backgroundColors=_backgroundColors - In the implementation block
@property (nonatomic,readonly) UIImage * touchIcon;                          //@synthesize touchIcon=_touchIcon - In the implementation block
+(id)new;
-(id)init;
-(NSArray *)backgroundColors;
-(UIImage *)touchIcon;
-(NSArray *)thumbnailImages;
-(id)initWithThumbnailImages:(id)arg1 backgroundColors:(id)arg2 touchIcon:(id)arg3 ;
@end

