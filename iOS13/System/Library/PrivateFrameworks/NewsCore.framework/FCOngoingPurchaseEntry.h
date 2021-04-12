/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSNumber, NSDate;

@interface FCOngoingPurchaseEntry : NSObject {

	BOOL _webAccessOptIn;
	NSString* _identifier;
	NSString* _tagID;
	NSString* _purchaseID;
	NSString* _productID;
	NSNumber* _appAdamID;
	NSNumber* _storeExternalVersion;
	NSString* _vendorIdentifier;
	NSDate* _purchaseInitiatedTime;
	NSNumber* _price;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * tagID;                             //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                        //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * productID;                         //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) BOOL webAccessOptIn;                        //@synthesize webAccessOptIn=_webAccessOptIn - In the implementation block
@property (nonatomic,copy) NSNumber * appAdamID;                         //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;              //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * purchaseInitiatedTime;               //@synthesize purchaseInitiatedTime=_purchaseInitiatedTime - In the implementation block
@property (nonatomic,copy) NSNumber * price;                             //@synthesize price=_price - In the implementation block
+(id)dummyOngoingPurchaseEntryWithTagID:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)productID;
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(NSNumber *)appAdamID;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(NSString *)tagID;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(NSNumber *)storeExternalVersion;
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(BOOL)webAccessOptIn;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productID:(id)arg4 webAccessOptIn:(BOOL)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10 ;
-(NSDate *)purchaseInitiatedTime;
-(void)setWebAccessOptIn:(BOOL)arg1 ;
-(void)setPurchaseInitiatedTime:(NSDate *)arg1 ;
@end

