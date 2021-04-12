/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKPaymentQueueClientDelegate;
@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {

	BOOL _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	long long _environmentType;
	BOOL _hidesConfirmationDialogs;
	BOOL _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	BOOL _requiresAuthenticationForPayment;
	NSNumber* _storeExternalVersion;
	NSNumber* _storeItemIdentifier;
	NSString* _vendorIdentifier;
	id<SKPaymentQueueClientDelegate> _delegate;

}

@property (assign,nonatomic) BOOL allowsBootstrapCellularData;                              //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic,__weak) id<SKPaymentQueueClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long environmentType;                                     //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) BOOL hidesConfirmationDialogs;                                 //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) BOOL ignoresInAppPurchaseRestriction;                          //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                                 //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthenticationForPayment;                         //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;                                 //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                                  //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                                     //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(BOOL)allowsBootstrapCellularData;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(id)plist;
-(id<SKPaymentQueueClientDelegate>)delegate;
-(void)setHidesConfirmationDialogs:(BOOL)arg1 ;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(void)setIgnoresInAppPurchaseRestriction:(BOOL)arg1 ;
-(NSString *)bundleIdentifier;
-(NSNumber *)storeExternalVersion;
-(void)setRequiresAuthenticationForPayment:(BOOL)arg1 ;
-(NSString *)bundleVersion;
-(void)setDelegate:(id<SKPaymentQueueClientDelegate>)arg1 ;
-(BOOL)ignoresInAppPurchaseRestriction;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)requiresAuthenticationForPayment;
-(NSString *)receiptDirectoryPath;
-(void)setReceiptDirectoryPath:(NSString *)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)vendorIdentifier;
-(long long)environmentType;
-(BOOL)hidesConfirmationDialogs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(void)setEnvironmentType:(long long)arg1 ;
@end

