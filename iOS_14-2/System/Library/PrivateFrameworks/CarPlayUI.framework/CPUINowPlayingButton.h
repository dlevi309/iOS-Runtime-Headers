/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CPUINowPlayingObserving.h>

@class CPUINowPlayingButtonView, UIImageView, NSString, CPUINowPlayingManager;

@interface CPUINowPlayingButton : UIButton <CPUINowPlayingObserving> {

	CPUINowPlayingButtonView* _nowPlayingView;
	UIImageView* _focusBackgroundView;
	NSString* _bundleIdentifier;
	NSString* _stateName;
	CPUINowPlayingManager* _nowPlayingManager;

}

@property (nonatomic,retain) CPUINowPlayingManager * nowPlayingManager;              //@synthesize nowPlayingManager=_nowPlayingManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stateName;                            //@synthesize stateName=_stateName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(NSString *)bundleIdentifier;
-(NSString *)stateName;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2 ;
-(CPUINowPlayingManager *)nowPlayingManager;
-(void)setNowPlayingManager:(CPUINowPlayingManager *)arg1 ;
-(id)_stateFromSnapshot:(id)arg1 ;
@end

