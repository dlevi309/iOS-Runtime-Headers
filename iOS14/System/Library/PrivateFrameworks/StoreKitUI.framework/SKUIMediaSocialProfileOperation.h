/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {

	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_profileWithResponseDictionary:(id)arg1 ;
@end

