/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject, NSString, SKUIRedeemConfiguration, SKUIRedeemViewControllerLegacy;

@interface SKUIRedeemPreflightOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _loadsRedeemCodeMetadata;
	/*^block*/id _outputBlock;
	NSString* _redeemCode;
	SKUIRedeemConfiguration* _redeemConfiguration;
	BOOL _forcesAuthentication;
	SKUIRedeemViewControllerLegacy* _redeemViewController;

}

@property (assign,nonatomic) BOOL forcesAuthentication;                                                 //@synthesize forcesAuthentication=_forcesAuthentication - In the implementation block
@property (assign) BOOL loadsRedeemCodeMetadata; 
@property (assign,nonatomic,__weak) SKUIRedeemViewControllerLegacy * redeemViewController;              //@synthesize redeemViewController=_redeemViewController - In the implementation block
@property (retain) SKUIRedeemConfiguration * redeemConfiguration; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(id)_authenticationContext;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(BOOL)arg3 ;
-(void)setRedeemViewController:(SKUIRedeemViewControllerLegacy *)arg1 ;
-(void)setLoadsRedeemCodeMetadata:(BOOL)arg1 ;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(id)_initSKUIRedeemPreflightOperation;
-(BOOL)forcesAuthentication;
-(SKUIRedeemViewControllerLegacy *)redeemViewController;
-(BOOL)loadsRedeemCodeMetadata;
-(id)_redeemCodeMetadataWithClientContext:(id)arg1 ;
-(void)setForcesAuthentication:(BOOL)arg1 ;
@end

