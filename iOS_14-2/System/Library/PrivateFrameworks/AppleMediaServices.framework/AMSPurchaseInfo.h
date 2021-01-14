/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSPurchaseDelegate;
@class ACAccount, NSMutableDictionary, AMSBuyParams, AMSProcessInfo, NSDictionary, NSString, NSURL, AMSPurchase;

@interface AMSPurchaseInfo : NSObject {

	BOOL _addKBSync;
	BOOL _hasBeenAuthedForBuy;
	BOOL _hasRetriedOriginalOwnerAccount;
	ACAccount* _account;
	NSMutableDictionary* _additionalHeaders;
	AMSBuyParams* _buyParams;
	AMSProcessInfo* _clientInfo;
	id<AMSPurchaseDelegate> _delegate;
	NSDictionary* _dialog;
	NSString* _dialogId;
	NSURL* _paymentServicesURL;
	NSString* _paymentToken;
	AMSPurchase* _purchase;

}

@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalHeaders;              //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (assign,nonatomic) BOOL addKBSync;                                       //@synthesize addKBSync=_addKBSync - In the implementation block
@property (nonatomic,retain) AMSBuyParams * buyParams;                             //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * clientInfo;                        //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * dialog;                                //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,retain) NSString * dialogId;                                  //@synthesize dialogId=_dialogId - In the implementation block
@property (assign,nonatomic) BOOL hasBeenAuthedForBuy;                             //@synthesize hasBeenAuthedForBuy=_hasBeenAuthedForBuy - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedOriginalOwnerAccount;                  //@synthesize hasRetriedOriginalOwnerAccount=_hasRetriedOriginalOwnerAccount - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                           //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                              //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,readonly) AMSPurchase * purchase;                             //@synthesize purchase=_purchase - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)dialogId;
-(NSDictionary *)dialog;
-(AMSPurchase *)purchase;
-(AMSProcessInfo *)clientInfo;
-(id<AMSPurchaseDelegate>)delegate;
-(void)setDialogId:(NSString *)arg1 ;
-(BOOL)addKBSync;
-(void)setDelegate:(id<AMSPurchaseDelegate>)arg1 ;
-(id)description;
-(NSString *)paymentToken;
-(void)setPaymentToken:(NSString *)arg1 ;
-(NSMutableDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSMutableDictionary *)arg1 ;
-(id)_purchaseStringForType:(long long)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
-(void)setAddKBSync:(BOOL)arg1 ;
-(void)setBuyParams:(AMSBuyParams *)arg1 ;
-(BOOL)hasBeenAuthedForBuy;
-(void)setHasBeenAuthedForBuy:(BOOL)arg1 ;
-(BOOL)hasRetriedOriginalOwnerAccount;
-(void)setHasRetriedOriginalOwnerAccount:(BOOL)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSURL *)paymentServicesURL;
-(void)setDialog:(NSDictionary *)arg1 ;
-(AMSBuyParams *)buyParams;
@end

