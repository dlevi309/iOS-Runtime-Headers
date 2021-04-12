/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation {

	BOOL _cameraRecognized;
	NSString* _code;
	SKUIClientContext* _clientContext;
	/*^block*/id _resultBlock;

}

@property (assign,nonatomic) BOOL cameraRecognized;                          //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (copy) id resultBlock;                                             //@synthesize resultBlock=_resultBlock - In the implementation block
-(void)main;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(id)_authenticationContext;
-(id)initWithCode:(id)arg1 ;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(id)_redeemForSuccessDictionary:(id)arg1 ;
-(id)_requestPropertiesForThankYouWithURL:(id)arg1 ;
-(id)_performRequestWithProperties:(id)arg1 error:(id*)arg2 ;
-(void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2 ;
-(id)_itemsForItemIdentifiers:(id)arg1 ;
@end

