/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultBlock;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_authenticationContext;
-(void)main;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)initWithCode:(id)arg1 ;
-(id)_redeemForSuccessDictionary:(id)arg1 ;
-(id)_requestPropertiesForThankYouWithURL:(id)arg1 ;
-(id)_performRequestWithProperties:(id)arg1 error:(id*)arg2 ;
-(void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2 ;
-(id)_itemsForItemIdentifiers:(id)arg1 ;
@end

