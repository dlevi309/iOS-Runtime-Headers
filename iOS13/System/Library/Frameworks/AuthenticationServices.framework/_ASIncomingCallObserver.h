/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;
	/*^block*/id _incomingCallHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callObserverWithBlock:(/*^block*/id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)_initWithBlock:(/*^block*/id)arg1 ;
@end

