/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@interface PUSlideshowViewModelChange : PUViewModelChange {

	BOOL _currentStateDidChange;
	BOOL _wantsChromeVisibleDidChange;

}

@property (assign,setter=_setCurrentStateDidChange:,nonatomic) BOOL currentStateDidChange;                          //@synthesize currentStateDidChange=_currentStateDidChange - In the implementation block
@property (assign,setter=_setWantsChromeVisibleDidChange:,nonatomic) BOOL wantsChromeVisibleDidChange;              //@synthesize wantsChromeVisibleDidChange=_wantsChromeVisibleDidChange - In the implementation block
-(BOOL)currentStateDidChange;
-(BOOL)wantsChromeVisibleDidChange;
-(void)_setCurrentStateDidChange:(BOOL)arg1 ;
-(void)_setWantsChromeVisibleDidChange:(BOOL)arg1 ;
-(BOOL)hasChanges;
@end

