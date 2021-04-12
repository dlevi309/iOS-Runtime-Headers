/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol CRCarPlayPreferencesDelegate;
@class NSString;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {

	BOOL _cachedCarPlayAllowed;
	id<CRCarPlayPreferencesDelegate> _preferencesDelegate;

}

@property (assign,nonatomic) BOOL cachedCarPlayAllowed;                                                //@synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<CRCarPlayPreferencesDelegate> preferencesDelegate;              //@synthesize preferencesDelegate=_preferencesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isWirelessCarPlayEnabled;
-(void)handleAssistantLanguageChanged:(id)arg1 ;
-(void)handleAssistantPreferencesChanged:(id)arg1 ;
-(BOOL)_isCarPlayAllowed;
-(void)setCachedCarPlayAllowed:(BOOL)arg1 ;
-(BOOL)cachedCarPlayAllowed;
-(id<CRCarPlayPreferencesDelegate>)preferencesDelegate;
-(void)_updateCarPlayAllowed;
-(BOOL)isCarPlayCapable;
-(BOOL)isCarPlayAllowed;
-(void)setPreferencesDelegate:(id<CRCarPlayPreferencesDelegate>)arg1 ;
@end

