/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {

	ISPurchaseReceipt* _purchaseReceipt;
	BOOL _isValid;

}

@property (readonly) BOOL isValid;                         //@synthesize isValid=_isValid - In the implementation block
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
@property (readonly) NSDate * expirationDate; 
+(id)receiptPathForProxy:(id)arg1 ;
+(void)getReceiptPathWithCompletionBlock:(/*^block*/id)arg1 ;
+(int)vppStateFlagsWithProxy:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isRevoked;
-(BOOL)isVPPLicensed;
-(BOOL)receiptExpired;
-(id)initWithContainerPath:(id)arg1 ;
@end

