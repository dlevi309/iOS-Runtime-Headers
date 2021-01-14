/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<APCarPlayPreferencesDelegate>)delegate;
-(void)handleCarPlayAllowedDidChange;
-(void)setDelegate:(id<APCarPlayPreferencesDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isCarPlayEnabled;
@end

