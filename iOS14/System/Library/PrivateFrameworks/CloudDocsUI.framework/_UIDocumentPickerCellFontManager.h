/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@class UIFont;

@interface _UIDocumentPickerCellFontManager : NSObject {

	UIFont* _titleFontForGridLayout;
	UIFont* _subtitleFontForGridLayout;
	UIFont* _titleFontForTableLayout;
	UIFont* _subtitleFontForTableLayout;

}

@property (nonatomic,retain) UIFont * titleFontForGridLayout;                  //@synthesize titleFontForGridLayout=_titleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForGridLayout;               //@synthesize subtitleFontForGridLayout=_subtitleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFontForTableLayout;                 //@synthesize titleFontForTableLayout=_titleFontForTableLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForTableLayout;              //@synthesize subtitleFontForTableLayout=_subtitleFontForTableLayout - In the implementation block
+(id)sharedFontManager;
-(id)init;
-(void)cacheFonts;
-(void)setTitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setTitleFontForGridLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForGridLayout:(UIFont *)arg1 ;
-(UIFont *)titleFontForGridLayout;
-(UIFont *)subtitleFontForGridLayout;
-(UIFont *)titleFontForTableLayout;
-(UIFont *)subtitleFontForTableLayout;
@end

