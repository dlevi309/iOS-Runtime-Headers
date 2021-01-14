/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class CXCallObserver;

@interface PSUICoreTelephonyCallCache : NSObject {

	CXCallObserver* _callObserver;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(CXCallObserver *)callObserver;
-(void)dealloc;
-(id)localizedPhoneNumber:(id)arg1 context:(id)arg2 ;
-(BOOL)isAnyCallActive;
-(BOOL)isAnyVOIPCallActive;
-(BOOL)isActiveCallVoLTE;
-(id)initPrivate:(id)arg1 ;
-(BOOL)isAnyCallActiveForProviderIdentifier:(id)arg1 ;
-(BOOL)isAnyTelephonyCallActive;
@end

