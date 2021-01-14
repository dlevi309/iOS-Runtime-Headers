/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary, NSArray;

@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying> {

	NSString* _currency;
	NSNumber* _errorCode;
	NSString* _errorDescription;
	NSString* _errorDomain;
	NSDictionary* _errorInfo;
	NSString* _logUUID;
	NSString* _permLink;
	NSString* _price;
	NSDictionary* _responseMetrics;
	NSNumber* _storeID;
	NSArray* _purchaseResponseItems;
	NSString* _purchaseParameters;
	NSDictionary* _item;
	NSString* _downloadID;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSString * currency;                            //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSString * errorDescription;                    //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                         //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSDictionary * errorInfo;                       //@synthesize errorInfo=_errorInfo - In the implementation block
@property (nonatomic,copy) NSString * logUUID;                             //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,copy) NSString * permLink;                            //@synthesize permLink=_permLink - In the implementation block
@property (nonatomic,copy) NSString * price;                               //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSDictionary * responseMetrics;                 //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (nonatomic,retain) NSNumber * storeID;                           //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,retain) NSArray * purchaseResponseItems;              //@synthesize purchaseResponseItems=_purchaseResponseItems - In the implementation block
@property (nonatomic,copy) NSDictionary * item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                          //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * purchaseParameters;                  //@synthesize purchaseParameters=_purchaseParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLogUUID:(NSString *)arg1 ;
-(NSNumber *)storeID;
-(NSString *)logUUID;
-(NSString *)price;
-(NSString *)downloadID;
-(NSString *)errorDomain;
-(NSDictionary *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)currency;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setItem:(NSDictionary *)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrice:(NSString *)arg1 ;
-(NSString *)permLink;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSDictionary *)responseMetrics;
-(NSString *)purchaseParameters;
-(NSDictionary *)errorInfo;
-(void)setPurchaseParameters:(NSString *)arg1 ;
-(id)initWithAMSPurchaseResult:(id)arg1 ;
-(NSArray *)purchaseResponseItems;
-(void)setErrorInfo:(NSDictionary *)arg1 ;
-(void)setPermLink:(NSString *)arg1 ;
-(void)setResponseMetrics:(NSDictionary *)arg1 ;
-(id)initWithPurchase:(id)arg1 error:(id)arg2 ;
-(void)setPurchaseResponseItems:(NSArray *)arg1 ;
-(id)initWithSSPurchaseResponse:(id)arg1 downloadID:(id)arg2 ;
-(NSDictionary *)metadata;
-(void)setCurrency:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(NSNumber *)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

