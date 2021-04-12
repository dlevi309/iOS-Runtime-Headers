/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class SSMachineDataRequest, NSString;

@interface ISMachineDataActionOperation : ISOperation {

	BOOL _blocksPurchaseRequests;
	BOOL _hidesServerDrivenDialogs;
	SSMachineDataRequest* _request;
	/*^block*/id _resultBlock;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (readonly) SSMachineDataRequest * machineDataRequest; 
@property (assign) BOOL blocksPurchaseRequests; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (copy) id resultBlock; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(BOOL)_shouldRetryAfterError:(id)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(id)uniqueKey;
-(id)initWithMachineDataRequest:(id)arg1 ;
-(NSString *)syncState;
-(BOOL)_provisionWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_syncMachineWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_eraseProvisioning;
-(BOOL)blocksPurchaseRequests;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(SSMachineDataRequest *)machineDataRequest;
-(void)setBlocksPurchaseRequests:(BOOL)arg1 ;
@end

