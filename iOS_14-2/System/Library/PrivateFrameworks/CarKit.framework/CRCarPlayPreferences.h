/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)cachedCarPlayAllowed;
-(id)init;
-(id<CRCarPlayPreferencesDelegate>)preferencesDelegate;
-(void)setPreferencesDelegate:(id<CRCarPlayPreferencesDelegate>)arg1 ;
-(BOOL)isWirelessCarPlayEnabled;
-(BOOL)isCarPlayAllowed;
-(BOOL)_isCarPlayAllowed;
-(BOOL)isCarPlayCapable;
-(void)_updateCarPlayAllowed;
-(void)handleAssistantPreferencesChanged:(id)arg1 ;
-(void)dealloc;
-(void)setCachedCarPlayAllowed:(BOOL)arg1 ;
-(void)handleAssistantLanguageChanged:(id)arg1 ;
@end

