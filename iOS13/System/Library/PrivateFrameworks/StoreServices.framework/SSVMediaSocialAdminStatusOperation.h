/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {

	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end

