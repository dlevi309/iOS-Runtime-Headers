/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, NSArray;

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	NSArray* _words;

}

@property (copy) id outputBlock; 
@property (copy) NSArray * words; 
-(void)main;
-(void)setWords:(NSArray *)arg1 ;
-(NSArray *)words;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
@end

