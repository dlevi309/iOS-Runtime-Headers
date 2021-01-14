/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface ISMachineDataSyncOperation : ISOperation {

	unsigned long long _accountID;
	BOOL _allowsBootstrapCellularData;
	BOOL _hidesServerDrivenDialogs;
	NSData* _inputData;
	long long _protocolVersion;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(NSString *)syncState;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)run;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 syncData:(id)arg2 ;
-(id)_newSyncOperationWithClientData:(id)arg1 machineIDData:(id)arg2 ;
@end

