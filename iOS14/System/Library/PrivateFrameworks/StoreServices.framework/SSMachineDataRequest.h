/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	NSData* _actionData;
	NSString* _actionName;
	BOOL _allowsBootstrapCellularData;
	long long _protocolVersion;
	NSString* _userAgent;
	BOOL _waitsForPurchaseOperations;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSData * actionData; 
@property (copy) NSString * actionName; 
@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
@property (assign) BOOL waitsForPurchaseOperations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsBootstrapCellularData;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(NSString *)actionName;
-(void)setProtocolVersion:(long long)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)waitsForPurchaseOperations;
-(long long)protocolVersion;
-(id)initWithURLResponse:(id)arg1 ;
-(NSData *)actionData;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)userAgent;
-(void)startWithDetailedCompletionBlock:(/*^block*/id)arg1 ;
-(void)setWaitsForPurchaseOperations:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setActionName:(NSString *)arg1 ;
-(void)setActionData:(NSData *)arg1 ;
@end

