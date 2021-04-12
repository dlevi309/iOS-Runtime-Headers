/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVPlatformRequestOperation, SKUIItemResourceRequest;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation {

	SSVPlatformRequestOperation* _underlyingOperation;

}

@property (__weak) SSVPlatformRequestOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUIItemResourceRequest * resourceRequest; 
-(void)cancel;
-(void)main;
-(id)initWithResourceRequest:(id)arg1 ;
-(void)setUnderlyingOperation:(SSVPlatformRequestOperation *)arg1 ;
-(SSVPlatformRequestOperation *)underlyingOperation;
@end

