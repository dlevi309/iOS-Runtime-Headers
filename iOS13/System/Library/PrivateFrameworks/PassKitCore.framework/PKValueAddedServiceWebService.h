/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class PKValueAddedServiceTransaction, NSURLSession, NSDictionary, PKPass, NSString;

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate> {

	PKValueAddedServiceTransaction* _valueAddedTransaction;
	NSURLSession* _urlSession;
	NSDictionary* _merchantPayload;
	PKPass* _pass;

}

@property (nonatomic,readonly) NSDictionary * merchantPayload;              //@synthesize merchantPayload=_merchantPayload - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                               //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPass *)pass;
-(id)initWithValueAddedServiceTransaction:(id)arg1 ;
-(void)downloadMerchantPayloadWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadPassWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)merchantPayload;
@end

