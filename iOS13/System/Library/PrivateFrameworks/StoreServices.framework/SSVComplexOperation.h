/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVOperation.h>

@class SSVFairPlaySAPSession, SSURLBag, NSDictionary;

@interface SSVComplexOperation : SSVOperation {

	SSVFairPlaySAPSession* _sapSession;
	SSURLBag* _urlBag;
	NSDictionary* _urlBagDictionary;

}

@property (copy,readonly) NSDictionary * URLBagDictionary; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(void)configureWithURLBag:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(NSDictionary *)URLBagDictionary;
-(id)newLoadURLOperationWithRequest:(id)arg1 ;
@end

