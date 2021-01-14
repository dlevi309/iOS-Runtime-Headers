/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setCoverSheetWallpaperStyle:(long long)arg1 ;
-(void)didAddSubview:(id)arg1 ;
@end

