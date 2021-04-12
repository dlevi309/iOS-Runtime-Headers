/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation {

	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;              //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
-(int)operationType;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
@end

