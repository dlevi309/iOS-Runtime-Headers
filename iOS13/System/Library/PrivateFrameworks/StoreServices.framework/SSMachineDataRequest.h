/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setActionName:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(long long)protocolVersion;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)setActionData:(NSData *)arg1 ;
-(NSData *)actionData;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(id)initWithURLResponse:(id)arg1 ;
-(NSString *)actionName;
-(void)startWithDetailedCompletionBlock:(/*^block*/id)arg1 ;
-(void)setWaitsForPurchaseOperations:(BOOL)arg1 ;
-(BOOL)waitsForPurchaseOperations;
@end

