/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
*/

#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@protocol APCarPlayPreferencesDelegate;
@class CRCarPlayPreferences, NSString;

@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate> {

	CRCarPlayPreferences* _preferences;
	id<APCarPlayPreferencesDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPreferencesDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCarPlayEnabled,nonatomic,readonly) BOOL carPlayEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<APCarPlayPreferencesDelegate>)delegate;
-(void)setDelegate:(id<APCarPlayPreferencesDelegate>)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(BOOL)isCarPlayEnabled;
@end

