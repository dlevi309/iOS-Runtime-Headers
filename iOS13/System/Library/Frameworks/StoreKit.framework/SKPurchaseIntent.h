/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString, SKXPCConnection;

@interface SKPurchaseIntent : NSObject {

	NSString* _bundleId;
	NSString* _productIdentifer;
	NSString* _appName;
	NSString* _productName;
	SKXPCConnection* _connection;
	/*^block*/id __completion;

}

@property (nonatomic,copy) id _completion;              //@synthesize _completion=__completion - In the implementation block
-(id)_completion;
-(void)send:(/*^block*/id)arg1 ;
-(void)set_completion:(id)arg1 ;
-(void)_send;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 ;
@end

