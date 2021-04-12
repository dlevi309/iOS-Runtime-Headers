/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary, AMSBuyParams, AMSProcessInfo;

@interface AMSPurchase : NSObject <NSCopying> {

	BOOL _userInitiated;
	NSString* _logUUID;
	NSNumber* _accountId;
	NSDictionary* _additionalHeaders;
	AMSBuyParams* _buyParams;
	NSString* _callerBundleId;
	NSString* _clientId;
	AMSProcessInfo* _clientInfo;
	NSNumber* _ownerAccountId;
	long long _purchaseType;
	NSString* _storefront;
	NSNumber* _uniqueIdentifier;

}

@property (nonatomic,copy) NSNumber * accountId;                                     //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaders;                         //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (nonatomic,copy) NSString * logUUID;                                       //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams;                             //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * callerBundleId;                                //@synthesize callerBundleId=_callerBundleId - In the implementation block
@property (nonatomic,copy) NSString * clientId;                                      //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy) AMSProcessInfo * clientInfo;                              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSNumber * ownerAccountId;                                //@synthesize ownerAccountId=_ownerAccountId - In the implementation block
@property (readonly) long long purchaseType;                                         //@synthesize purchaseType=_purchaseType - In the implementation block
@property (nonatomic,copy) NSString * storefront;                                    //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,readonly) NSNumber * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(NSString *)storefront;
-(NSString *)callerBundleId;
-(void)setCallerBundleId:(NSString *)arg1 ;
-(NSString *)clientId;
-(AMSBuyParams *)buyParams;
-(void)setUserInitiated:(BOOL)arg1 ;
-(id)_generateIdentifier;
-(BOOL)isUserInitiated;
-(void)setClientId:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setStorefront:(NSString *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setLogUUID:(NSString *)arg1 ;
-(NSString *)logUUID;
-(NSNumber *)accountId;
-(NSDictionary *)additionalHeaders;
-(long long)purchaseType;
-(id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2 ;
-(void)setAccountId:(NSNumber *)arg1 ;
-(void)setAdditionalHeaders:(NSDictionary *)arg1 ;
-(NSNumber *)ownerAccountId;
-(void)setOwnerAccountId:(NSNumber *)arg1 ;
@end

