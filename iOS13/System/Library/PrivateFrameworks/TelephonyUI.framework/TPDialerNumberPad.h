/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TPNumberPad.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class TPDialerSoundController, NSString;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {

	BOOL _playsSounds;
	id<TPDialerKeypadDelegate> _delegate;
	TPDialerSoundController* _soundController;

}

@property (retain) TPDialerSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (assign,nonatomic) BOOL playsSounds;                             //@synthesize playsSounds=_playsSounds - In the implementation block
@property (assign) id<TPDialerKeypadDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialerNumberPadFullCharacters;
+(id)dialerNumberPadNumericCharacters;
-(id<TPDialerKeypadDelegate>)delegate;
-(void)setDelegate:(id<TPDialerKeypadDelegate>)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(long long)indexForHighlightedKey;
-(TPDialerSoundController *)soundController;
-(void)setSoundController:(TPDialerSoundController *)arg1 ;
-(void)buttonUpOutside:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(BOOL)playsSounds;
@end

