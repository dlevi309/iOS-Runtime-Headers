/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDAssetTokenRequest, NSMapTable, NSDictionary;

@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest {

	BOOL _useEncryption;
	CKDAssetTokenRequest* _assetTokenRequest;
	NSMapTable* _transactionStateByRequestIDs;
	NSDictionary* _headers;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;               //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (nonatomic,retain) NSMapTable * transactionStateByRequestIDs;              //@synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                 //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL useEncryption;                                     //@synthesize useEncryption=_useEncryption - In the implementation block
-(BOOL)allowsAnonymousAccount;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(void)setUseEncryption:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(BOOL)useEncryption;
-(id)requestOperationClasses;
-(NSDictionary *)headers;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(void)setTransactionStateByRequestIDs:(NSMapTable *)arg1 ;
-(NSMapTable *)transactionStateByRequestIDs;
-(id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3 ;
@end

