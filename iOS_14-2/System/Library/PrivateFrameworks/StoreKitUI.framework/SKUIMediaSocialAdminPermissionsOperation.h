/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_authorsWithResponseDictionary:(id)arg1 ;
-(id)_lookupResponseForMissingAuthors:(id)arg1 error:(id*)arg2 ;
@end

