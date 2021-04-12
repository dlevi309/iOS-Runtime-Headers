/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/MCDNowPlayingObserverDelegate.h>

@class MCDNowPlayingButtonView, UIImageView, NSString;

@interface MCDNowPlayingButton : UIButton <MCDNowPlayingObserverDelegate> {

	MCDNowPlayingButtonView* _nowPlayingView;
	UIImageView* _focusBackgroundView;
	NSString* _stateName;
	double _height;

}

@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSString * stateName;                    //@synthesize stateName=_stateName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithHeight:(double)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(NSString *)stateName;
-(void)nowPlayingObserver:(id)arg1 stateDidChanged:(BOOL)arg2 ;
@end

