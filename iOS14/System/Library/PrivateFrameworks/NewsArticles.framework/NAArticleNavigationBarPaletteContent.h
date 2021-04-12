/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUArticleMessaging.h>
#import <libobjc.A.dylib/TUBarPaletteContents.h>

@interface NAArticleNavigationBarPaletteContent : UIView <NUArticleMessaging, TUBarPaletteContents> {

	 fadingBar;
	 opaqueBar;
	 horizontalScrollOffset;
	 audioButtonLocation;

}
+(double)paletteHeight;
-(id)showMessage:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBarColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)compressWithScale:(double)arg1 opacity:(double)arg2 ;
-(double)paletteHeight;
-(void)setHorizontalScrollOffset:(double)arg1 audioButtonLocation:(double)arg2 ;
-(void)setBarColorFor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 primaryVisibilityFactor:(double)arg4 ;
-(id)setPaletteColorWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 primaryVisibilityFactor:(double)arg3 ;
@end

