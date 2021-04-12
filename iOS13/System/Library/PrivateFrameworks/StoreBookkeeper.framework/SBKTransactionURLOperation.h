/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

@interface SBKTransactionURLOperation : ISStoreURLOperation {

	BOOL _shouldAuthenticate;
	SBKRequest* _SBKRequest;

}

@property (assign,nonatomic) BOOL shouldAuthenticate;                               //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (setter=BKRequest,nonatomic,retain) SBKRequest * SBKRequest;              //@synthesize SBKRequest=_SBKRequest - In the implementation block
+(id)operationWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)description;
-(id)_init;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(void)setSBKRequest:(SBKRequest *)arg1 ;
-(SBKRequest *)SBKRequest;
@end

