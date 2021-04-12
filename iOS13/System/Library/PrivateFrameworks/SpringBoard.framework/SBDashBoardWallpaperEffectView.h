/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWallpaperEffectView.h>
#import <libobjc.A.dylib/CSWallpaperView.h>

@class SBUIBackgroundView, NSString;

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView> {

	SBUIBackgroundView* _backgroundView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)didAddSubview:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setCoverSheetWallpaperStyle:(long long)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2 ;
@end

