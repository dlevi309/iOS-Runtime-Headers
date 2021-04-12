/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation {

	SSVLoadURLOperation* _underlyingOperation;

}

@property (__weak) SSVLoadURLOperation * underlyingOperation;                 //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUISortDataRequest * resourceRequest; 
-(void)cancel;
-(void)main;
-(id)initWithResourceRequest:(id)arg1 ;
-(void)setUnderlyingOperation:(SSVLoadURLOperation *)arg1 ;
-(SSVLoadURLOperation *)underlyingOperation;
@end

