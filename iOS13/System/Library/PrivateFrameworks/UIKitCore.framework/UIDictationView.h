/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@protocol UIDictationViewDisplayDelegate;
@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	BOOL _showLanguageLabel;
	BOOL _switchingLanguage;
	id<UIDictationViewDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) BOOL showLanguageLabel;                                          //@synthesize showLanguageLabel=_showLanguageLabel - In the implementation block
@property (assign,nonatomic) BOOL switchingLanguage;                                          //@synthesize switchingLanguage=_switchingLanguage - In the implementation block
@property (assign,nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CGSize)layoutSize;
+(CGSize)viewSize;
+(id)activeInstance;
+(Class)dictationViewClass;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(BOOL)visible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(CGPoint)contentOffset;
-(void)setSwitchingLanguage:(BOOL)arg1 ;
-(void)returnToKeyboard;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(void)applicationWillResignActive;
-(BOOL)switchingLanguage;
-(void)setShowLanguageLabel:(BOOL)arg1 ;
-(void)highlightEndpointButton;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(BOOL)drawsOwnBackground;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(CGPoint)backgroundOffset;
-(void)keyboardDidShow:(id)arg1 ;
-(BOOL)isShowing;
-(void)endpointButtonPressed;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
-(BOOL)showLanguageLabel;
@end

