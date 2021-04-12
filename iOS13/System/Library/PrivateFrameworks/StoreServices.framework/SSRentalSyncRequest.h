/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding> {

	NSArray* _sinfs;
	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;

}

@property (readonly) NSArray * sinfs;                               //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSArray *)sinfs;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
@end

