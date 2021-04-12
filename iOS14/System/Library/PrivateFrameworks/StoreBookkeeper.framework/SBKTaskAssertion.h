/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {

	/*^block*/id _expireHandler;
	NSString* _debugInfo;
	SBKProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(id)description;
-(void)invalidate;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
@end

