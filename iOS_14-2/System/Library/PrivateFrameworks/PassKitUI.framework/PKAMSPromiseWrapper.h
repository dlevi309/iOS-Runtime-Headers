/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@class AMSPromise, NSString;

@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _invalidated;
	BOOL _canceled;
	AMSPromise* _promise;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(BOOL)isCanceled;
-(BOOL)isInvalidated;
-(id)init;
-(id)initWithAMSPromise:(id)arg1 ;
-(void)invalidate;
-(void)cancel;
@end

