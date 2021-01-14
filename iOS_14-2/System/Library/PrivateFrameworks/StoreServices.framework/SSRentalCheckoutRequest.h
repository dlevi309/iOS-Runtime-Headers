/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	long long _downloadIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	BOOL _shouldValidateRentalInfo;
	BOOL _checkoutWithPlay;
	unsigned long long _checkoutType;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (readonly) long long downloadIdentifier; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;                                    //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (assign,getter=shouldCheckoutWithPlay,nonatomic) BOOL checkoutWithPlay;              //@synthesize checkoutWithPlay=_checkoutWithPlay - In the implementation block
@property (assign) unsigned long long checkoutType;                                            //@synthesize checkoutType=_checkoutType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)sinfs;
-(long long)downloadIdentifier;
-(id)init;
-(NSNumber *)accountIdentifier;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
-(BOOL)shouldCheckoutWithPlay;
-(void)setCheckoutWithPlay:(BOOL)arg1 ;
-(unsigned long long)checkoutType;
-(void)setCheckoutType:(unsigned long long)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(void)dealloc;
@end

