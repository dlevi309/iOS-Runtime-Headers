/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVPlatformRequestOperation, SKUIItemResourceRequest;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation {

	SSVPlatformRequestOperation* _underlyingOperation;

}

@property (__weak) SSVPlatformRequestOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUIItemResourceRequest * resourceRequest; 
-(SSVPlatformRequestOperation *)underlyingOperation;
-(void)main;
-(void)cancel;
-(void)setUnderlyingOperation:(SSVPlatformRequestOperation *)arg1 ;
-(id)initWithResourceRequest:(id)arg1 ;
@end

