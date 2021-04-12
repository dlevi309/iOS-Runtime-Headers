/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBIconViewProviding;
@class NSString, SBIconView, SBIcon;

@interface SBIconRotationContainer : UIView {

	BOOL _offscreen;
	NSString* _location;
	long long _transitionAnimation;
	SBIconView* _startView;
	SBIconView* _endView;
	id<SBIconViewProviding> _iconViewProvider;
	SBIconCoordinate _coordinate;

}

@property (nonatomic,readonly) SBIconView * startView;                              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,readonly) SBIconView * endView;                                //@synthesize endView=_endView - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;              //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,readonly) SBIcon * startIcon; 
@property (nonatomic,readonly) SBIcon * endIcon; 
@property (nonatomic,readonly) SBIconCoordinate coordinate;                         //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long transitionAnimation;                       //@synthesize transitionAnimation=_transitionAnimation - In the implementation block
@property (getter=isOffscreen,nonatomic,readonly) BOOL offscreen;                   //@synthesize offscreen=_offscreen - In the implementation block
-(SBIconCoordinate)coordinate;
-(NSString *)location;
-(void)layoutSubviews;
-(SBIconView *)endView;
-(SBIconView *)startView;
-(void)performTransition;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 iconViewProvider:(id)arg4 coordinate:(SBIconCoordinate)arg5 location:(id)arg6 transitionAnimation:(long long)arg7 offscreen:(BOOL)arg8 ;
-(void)prepareToTransition;
-(SBIcon *)endIcon;
-(void)concludeTransition;
-(id)addIconViewForIcon:(id)arg1 configurationOptions:(unsigned long long)arg2 ;
-(long long)transitionAnimation;
-(SBIcon *)startIcon;
-(BOOL)isOffscreen;
@end

