/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)words;
-(void)setOutputBlock:(id)arg1 ;
-(void)setWords:(NSArray *)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
@end

