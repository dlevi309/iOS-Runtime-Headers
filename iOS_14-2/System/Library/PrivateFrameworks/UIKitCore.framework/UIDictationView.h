/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeInstance;
+(CGSize)viewSize;
+(id)sharedInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(BOOL)switchingLanguage;
-(void)setShowLanguageLabel:(BOOL)arg1 ;
-(void)highlightEndpointButton;
-(void)show;
-(BOOL)visible;
-(void)applicationWillResignActive;
-(BOOL)isShowing;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(void)finishReturnToKeyboard;
-(BOOL)drawsOwnBackground;
-(void)prepareForReturnToKeyboard;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(CGPoint)backgroundOffset;
-(void)keyboardDidShow:(id)arg1 ;
-(void)endpointButtonPressed;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
-(BOOL)showLanguageLabel;
-(void)setSwitchingLanguage:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(void)returnToKeyboard;
-(CGPoint)contentOffset;
-(void)dealloc;
@end

