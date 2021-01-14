/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class NSDictionary;


@protocol TUCallProviderManagerDataSource <NSObject>
@property (nonatomic,readonly) BOOL currentProcessCanAccessInitialState; 
@property (nonatomic,copy,readonly) NSDictionary * providersByIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * localProvidersByIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * pairedHostDeviceProvidersByIdentifier; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate; 
@required
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;
-(void)setDelegate:(id)arg1;
-(BOOL)currentProcessCanAccessInitialState;
-(NSDictionary *)localProvidersByIdentifier;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3;
-(void)blockUntilInitialStateReceived;
-(void)invalidate;
-(NSDictionary *)providersByIdentifier;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1;

@end

