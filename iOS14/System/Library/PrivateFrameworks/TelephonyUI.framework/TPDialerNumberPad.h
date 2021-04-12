/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dialerNumberPadNumericCharacters;
+(id)dialerNumberPadFullCharacters;
-(void)buttonTapped:(id)arg1 ;
-(id<TPDialerKeypadDelegate>)delegate;
-(void)buttonDown:(id)arg1 ;
-(TPDialerSoundController *)soundController;
-(void)buttonUp:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)setDelegate:(id<TPDialerKeypadDelegate>)arg1 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(BOOL)playsSounds;
-(long long)indexForHighlightedKey;
-(void)buttonUpOutside:(id)arg1 ;
-(void)setSoundController:(TPDialerSoundController *)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
@end

