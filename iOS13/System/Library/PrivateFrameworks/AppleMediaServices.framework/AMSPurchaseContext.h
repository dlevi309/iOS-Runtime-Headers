/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSPurchaseResponseProtocol;
@class AMSBuyParams, NSString, ACAccount, NSMutableDictionary, AMSProcessInfo, NSDictionary, AMSPurchase;

@interface AMSPurchaseContext : NSObject {

	BOOL _addKBSync;
	BOOL _hasRetriedOriginalOwnerAccount;
	BOOL _serverBatchCanceled;
	AMSBuyParams* _buyParams;
	NSString* _logUUID;
	ACAccount* _account;
	NSMutableDictionary* _additionalHeaders;
	AMSProcessInfo* _clientInfo;
	id<AMSPurchaseResponseProtocol> _delegate;
	NSDictionary* _dialog;
	NSString* _dialogId;
	AMSPurchase* _purchase;
	long long _retryCount;

}

@property (nonatomic,retain) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalHeaders;               //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (assign,nonatomic) BOOL addKBSync;                                        //@synthesize addKBSync=_addKBSync - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * clientInfo;                         //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * dialog;                                 //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,retain) NSString * dialogId;                                   //@synthesize dialogId=_dialogId - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedOriginalOwnerAccount;                   //@synthesize hasRetriedOriginalOwnerAccount=_hasRetriedOriginalOwnerAccount - In the implementation block
@property (nonatomic,readonly) AMSPurchase * purchase;                              //@synthesize purchase=_purchase - In the implementation block
@property (assign,nonatomic) long long retryCount;                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL serverBatchCanceled;                              //@synthesize serverBatchCanceled=_serverBatchCanceled - In the implementation block
@property (nonatomic,retain) AMSBuyParams * buyParams;                              //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) NSString * logUUID;                                  //@synthesize logUUID=_logUUID - In the implementation block
-(id)description;
-(id<AMSPurchaseResponseProtocol>)delegate;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSBuyParams *)buyParams;
-(void)setBuyParams:(AMSBuyParams *)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(AMSPurchase *)purchase;
-(NSString *)logUUID;
-(NSMutableDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSMutableDictionary *)arg1 ;
-(id)_purchaseStringForType:(long long)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
-(BOOL)addKBSync;
-(void)setAddKBSync:(BOOL)arg1 ;
-(NSDictionary *)dialog;
-(void)setDialog:(NSDictionary *)arg1 ;
-(NSString *)dialogId;
-(void)setDialogId:(NSString *)arg1 ;
-(BOOL)hasRetriedOriginalOwnerAccount;
-(void)setHasRetriedOriginalOwnerAccount:(BOOL)arg1 ;
-(BOOL)serverBatchCanceled;
-(void)setServerBatchCanceled:(BOOL)arg1 ;
@end

