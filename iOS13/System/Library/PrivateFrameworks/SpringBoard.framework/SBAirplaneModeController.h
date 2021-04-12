/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol SBAirplaneModeDelegate;
@class RadiosPreferences;

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPrefs;
	BOOL _cachedInAirplaneMode;
	id<SBAirplaneModeDelegate> _delegate;

}

@property (assign,getter=isInAirplaneMode,nonatomic) BOOL inAirplaneMode; 
@property (assign,nonatomic,__weak) id<SBAirplaneModeDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<SBAirplaneModeDelegate>)delegate;
-(void)setDelegate:(id<SBAirplaneModeDelegate>)arg1 ;
-(void)airplaneModeChanged;
-(BOOL)isInAirplaneMode;
-(void)setInAirplaneMode:(BOOL)arg1 ;
@end

