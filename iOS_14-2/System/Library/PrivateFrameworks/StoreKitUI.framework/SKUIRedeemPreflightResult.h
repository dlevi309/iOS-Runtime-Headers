/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SSAccount, SKUIClientContext, SSVRedeemCodeMetadata, NSError, SKUIRedeemConfiguration;

@interface SKUIRedeemPreflightResult : NSObject {

	SSAccount* _account;
	SKUIClientContext* _clientContext;
	SSVRedeemCodeMetadata* _codeMetadata;
	NSError* _error;
	SKUIRedeemConfiguration* _redeemConfiguration;
	long long _resultType;

}

@property (nonatomic,retain) SSAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SSVRedeemCodeMetadata * codeMetadata;                       //@synthesize codeMetadata=_codeMetadata - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;              //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) long long resultType;                                       //@synthesize resultType=_resultType - In the implementation block
-(SSAccount *)account;
-(void)setResultType:(long long)arg1 ;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(long long)resultType;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(SSVRedeemCodeMetadata *)codeMetadata;
-(void)setCodeMetadata:(SSVRedeemCodeMetadata *)arg1 ;
@end

