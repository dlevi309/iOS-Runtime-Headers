/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNTUCallProviderManager.h>

@protocol CNTUCallProviderManager <NSObject>
@required
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1;
-(id)thirdPartyCallProvidersForActionType:(id)arg1;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1;

@end


@class TUCallProviderManager, NSString;

@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager> {

	TUCallProviderManager* _callProviderManager;

}

@property (nonatomic,copy) TUCallProviderManager * callProviderManager;              //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(TUCallProviderManager *)callProviderManager;
-(id)providerManagerQueue;
-(BOOL)isFirstPartyCallProvider:(id)arg1 ;
-(BOOL)isActionType:(id)arg1 supportedByProvider:(id)arg2 ;
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1 ;
-(id)thirdPartyCallProvidersForActionType:(id)arg1 ;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1 ;
@end

