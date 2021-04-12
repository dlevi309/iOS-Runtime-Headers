/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFBackgroundAssertion.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)backgroundAssertionWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)end;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

