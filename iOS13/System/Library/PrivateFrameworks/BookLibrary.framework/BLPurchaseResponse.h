/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying> {

	NSString* _downloadID;
	NSString* _purchaseParameters;
	NSString* _permLink;
	NSNumber* _storeID;
	NSDictionary* _responseMetrics;
	NSString* _currency;
	NSString* _price;
	NSDictionary* _errorInfo;
	NSString* _errorDomain;
	NSNumber* _errorCode;
	NSString* _errorDescription;

}

@property (nonatomic,copy) NSString * downloadID;                       //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSString * purchaseParameters;               //@synthesize purchaseParameters=_purchaseParameters - In the implementation block
@property (nonatomic,copy) NSString * permLink;                         //@synthesize permLink=_permLink - In the implementation block
@property (nonatomic,retain) NSNumber * storeID;                        //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSDictionary * responseMetrics;              //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (nonatomic,copy) NSString * currency;                         //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSString * price;                            //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSDictionary * errorInfo;                    //@synthesize errorInfo=_errorInfo - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                      //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSNumber * errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSString * errorDescription;                 //@synthesize errorDescription=_errorDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)storeID;
-(NSNumber *)errorCode;
-(NSString *)errorDomain;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setStoreID:(NSNumber *)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSString *)downloadID;
-(NSDictionary *)responseMetrics;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)permLink;
-(void)setResponseMetrics:(NSDictionary *)arg1 ;
-(NSString *)purchaseParameters;
-(void)setPurchaseParameters:(NSString *)arg1 ;
-(void)setPermLink:(NSString *)arg1 ;
-(NSDictionary *)errorInfo;
-(void)setErrorInfo:(NSDictionary *)arg1 ;
@end

