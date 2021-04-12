/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_authorsWithResponseDictionary:(id)arg1 ;
-(id)_lookupResponseForMissingAuthors:(id)arg1 error:(id*)arg2 ;
@end

