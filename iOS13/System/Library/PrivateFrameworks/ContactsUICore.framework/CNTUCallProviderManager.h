/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(TUCallProviderManager *)callProviderManager;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(id)providerManagerQueue;
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1 ;
-(id)thirdPartyCallProvidersForActionType:(id)arg1 ;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1 ;
@end

