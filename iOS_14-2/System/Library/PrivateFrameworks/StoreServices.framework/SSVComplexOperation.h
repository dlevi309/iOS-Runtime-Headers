/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(NSDictionary *)URLBagDictionary;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(id)newLoadURLOperationWithRequest:(id)arg1 ;
-(void)configureWithURLBag:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
@end

