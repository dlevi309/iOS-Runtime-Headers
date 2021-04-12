/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>

@class UIFont;

@interface PUFontManager : PXObservable {

	UIFont* _albumListTitleLabelFont;
	UIFont* _albumListSubtitleLabelFont;
	UIFont* _albumListSectionTitleLabelFont;

}

@property (nonatomic,retain) UIFont * albumListTitleLabelFont;                     //@synthesize albumListTitleLabelFont=_albumListTitleLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * albumListSubtitleLabelFont;                  //@synthesize albumListSubtitleLabelFont=_albumListSubtitleLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * albumListSectionTitleLabelFont;              //@synthesize albumListSectionTitleLabelFont=_albumListSectionTitleLabelFont - In the implementation block
-(void)setAlbumListTitleLabelFont:(UIFont *)arg1 ;
-(id)init;
-(void)setAlbumListSubtitleLabelFont:(UIFont *)arg1 ;
-(void)setAlbumListSectionTitleLabelFont:(UIFont *)arg1 ;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(void)invalidateFonts;
-(UIFont *)albumListTitleLabelFont;
-(id)mutableChangeObject;
-(UIFont *)albumListSubtitleLabelFont;
-(void)_setNeedsUpdate;
-(UIFont *)albumListSectionTitleLabelFont;
-(void)dealloc;
@end

