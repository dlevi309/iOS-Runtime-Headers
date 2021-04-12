/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation {

	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;              //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
@end

