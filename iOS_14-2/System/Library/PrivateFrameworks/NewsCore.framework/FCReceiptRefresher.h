/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/SKRequestDelegate.h>
#import <libobjc.A.dylib/FCReceiptRefresherType.h>

@class NSString, SKReceiptRefreshRequest, NFPendingPromise;

@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType> {

	NSString* _restoreBundleID;
	SKReceiptRefreshRequest* _request;
	NFPendingPromise* _pendingPromise;

}

@property (nonatomic,copy) NSString * restoreBundleID;                       //@synthesize restoreBundleID=_restoreBundleID - In the implementation block
@property (nonatomic,retain) SKReceiptRefreshRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NFPendingPromise * pendingPromise;              //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPendingPromise:(NFPendingPromise *)arg1 ;
-(NSString *)restoreBundleID;
-(void)setRestoreBundleID:(NSString *)arg1 ;
-(id)refreshReceiptDirectoryURLWithBundleID:(id)arg1 ;
-(NFPendingPromise *)pendingPromise;
-(id)refreshForPurchase:(id)arg1 ;
-(void)setRequest:(SKReceiptRefreshRequest *)arg1 ;
-(SKReceiptRefreshRequest *)request;
-(void)requestDidFinish:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
@end

