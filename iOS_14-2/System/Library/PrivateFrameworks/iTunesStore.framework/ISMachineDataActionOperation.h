/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)uniqueKey;
-(NSString *)syncState;
-(void)run;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)initWithMachineDataRequest:(id)arg1 ;
-(BOOL)_shouldRetryAfterError:(id)arg1 ;
-(BOOL)_provisionWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_syncMachineWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_eraseProvisioning;
-(BOOL)blocksPurchaseRequests;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(SSMachineDataRequest *)machineDataRequest;
-(void)setBlocksPurchaseRequests:(BOOL)arg1 ;
@end

