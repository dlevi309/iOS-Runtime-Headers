/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)operationType;
-(void)setUseEncryption:(BOOL)arg1 ;
-(BOOL)useEncryption;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(void)setTransactionStateByRequestIDs:(NSMapTable *)arg1 ;
-(NSMapTable *)transactionStateByRequestIDs;
-(id)initWithAssetTokenRequest:(id)arg1 headers:(id)arg2 ;
@end

