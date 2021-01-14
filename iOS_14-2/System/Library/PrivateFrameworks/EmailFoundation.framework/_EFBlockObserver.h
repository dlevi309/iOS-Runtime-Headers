/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObserver.h>

@interface _EFBlockObserver : EFObserver {

	/*^block*/id _resultBlock;
	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;

}
-(id)initWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

