/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModel.h>

@interface PUSlideshowViewModel : PUViewModel {

	BOOL _wantsChromeVisible;
	long long _currentState;

}

@property (assign,nonatomic) long long currentState;                                             //@synthesize currentState=_currentState - In the implementation block
@property (assign,setter=setWantsChromeVisible:,nonatomic) BOOL wantsChromeVisible;              //@synthesize wantsChromeVisible=_wantsChromeVisible - In the implementation block
-(void)registerChangeObserver:(id)arg1 ;
-(id)currentChange;
-(void)setCurrentState:(long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(long long)currentState;
-(BOOL)wantsChromeVisible;
-(void)setWantsChromeVisible:(BOOL)arg1 ;
-(void)setWantsChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 ;
-(id)newViewModelChange;
@end

