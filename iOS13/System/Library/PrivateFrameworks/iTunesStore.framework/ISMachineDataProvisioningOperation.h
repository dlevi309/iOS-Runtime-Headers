/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface ISMachineDataProvisioningOperation : ISOperation {

	unsigned long long _accountID;
	BOOL _allowsBootstrapCellularData;
	BOOL _hidesServerDrivenDialogs;
	NSData* _inputData;
	long long _protocolVersion;
	NSString* _userAgent;

}

@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(long long)protocolVersion;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(BOOL)hidesServerDrivenDialogs;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2 ;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(id)_newFinishProvisioningOperationWithData:(id)arg1 ;
-(BOOL)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned)arg2 error:(id*)arg3 ;
@end

