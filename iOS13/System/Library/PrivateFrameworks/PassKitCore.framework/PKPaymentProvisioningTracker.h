/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKCancelable.h>

@class PKPaymentProvisioningController, NSString;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable> {

	PKPaymentProvisioningController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
-(void)dealloc;
-(void)cancel;
-(BOOL)isCanceled;
-(id)initWithPaymentProvisioningController:(id)arg1 ;
@end

