/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVLoadDownloadQueueOperation.h>

@class NSString, NSNumber;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {

	NSString* _downloadTrasactionID;
	NSNumber* _accountID;
	NSString* _downloadTransactionID;

}

@property (readonly) NSNumber * accountID; 
@property (readonly) NSString * downloadTransactionID;              //@synthesize downloadTransactionID=_downloadTransactionID - In the implementation block
-(void)main;
-(NSNumber *)accountID;
-(BOOL)_refreshDownloadWithTransactionID:(id)arg1 accountID:(id)arg2 bagKey:(id)arg3 error:(id*)arg4 ;
-(id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2 ;
-(id)isDownloadTransactionID;
-(NSString *)downloadTransactionID;
@end

