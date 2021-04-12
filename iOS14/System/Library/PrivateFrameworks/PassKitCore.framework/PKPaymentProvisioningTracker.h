/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKCancelable.h>

@class PKPaymentProvisioningController, NSString;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable> {

	PKPaymentProvisioningController* _controller;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCanceled;
-(id)initWithPaymentProvisioningController:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

