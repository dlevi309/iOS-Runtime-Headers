/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)blockUntilInitialStateReceived;
-(BOOL)currentProcessCanAccessInitialState;
-(NSDictionary *)providersByIdentifier;
-(NSDictionary *)localProvidersByIdentifier;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;

@end

