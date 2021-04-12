/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)end;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

