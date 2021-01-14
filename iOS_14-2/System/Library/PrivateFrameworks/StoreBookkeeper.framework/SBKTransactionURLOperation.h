/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(SBKRequest *)SBKRequest;
-(BOOL)shouldAuthenticate;
-(void)setSBKRequest:(SBKRequest *)arg1 ;
-(id)_init;
@end

