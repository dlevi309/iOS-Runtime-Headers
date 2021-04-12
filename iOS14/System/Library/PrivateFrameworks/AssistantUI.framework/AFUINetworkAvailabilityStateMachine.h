/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/AFUIStateMachineDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol AFUINetworkAvailabilityStateMachineDelegate;
@class RadiosPreferences, AFUIStateMachine, NSString;

@interface AFUINetworkAvailabilityStateMachine : NSObject <AFUIStateMachineDelegate, RadiosPreferencesDelegate> {

	id<AFUINetworkAvailabilityStateMachineDelegate> _delegate;
	RadiosPreferences* _radioPreferences;
	AFUIStateMachine* _stateMachine;

}

@property (assign,nonatomic,__weak) id<AFUINetworkAvailabilityStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                         //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (nonatomic,retain) AFUIStateMachine * stateMachine;                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_state;
-(id<AFUINetworkAvailabilityStateMachineDelegate>)delegate;
-(void)setStateMachine:(AFUIStateMachine *)arg1 ;
-(void)airplaneModeChanged;
-(void)setDelegate:(id<AFUINetworkAvailabilityStateMachineDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)_stateMachine;
-(AFUIStateMachine *)stateMachine;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)_siriNetworkAvailabilityDidChange:(unsigned long long)arg1 ;
-(void)_performTransitionForEvent:(long long)arg1 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 ;
-(id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2 ;
-(void)siriNetworkAvailabilityDidChange;
@end

