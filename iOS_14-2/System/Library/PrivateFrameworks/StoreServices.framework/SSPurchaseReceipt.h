/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)isVPPLicensed;
-(BOOL)receiptExpired;
-(id)initWithContainerPath:(id)arg1 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isRevoked;
@end

