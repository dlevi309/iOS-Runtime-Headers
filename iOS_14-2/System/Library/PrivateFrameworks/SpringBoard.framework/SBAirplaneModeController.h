/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue, SBAirplaneModeDelegate;
@class RadiosPreferences, NSObject;

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPrefs;
	BOOL _cachedInAirplaneMode;
	NSObject*<OS_dispatch_queue> _radioQueue;
	id<SBAirplaneModeDelegate> _delegate;

}

@property (assign,getter=isInAirplaneMode,nonatomic) BOOL inAirplaneMode; 
@property (assign,nonatomic,__weak) id<SBAirplaneModeDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(BOOL)isInAirplaneMode;
-(id)init;
-(id<SBAirplaneModeDelegate>)delegate;
-(void)setInAirplaneMode:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(void)setDelegate:(id<SBAirplaneModeDelegate>)arg1 ;
@end

