/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFBackgroundAssertion.h>

@class NSString, BKSProcessAssertion;

@interface WFBKSBackgroundAssertion : WFBackgroundAssertion {

	NSString* _taskName;
	/*^block*/id _expirationHandler;
	BKSProcessAssertion* _assertion;
	id _observer;

}

@property (nonatomic,copy,readonly) NSString * taskName;                   //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,copy) id expirationHandler;                           //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,retain) id observer;                                  //@synthesize observer=_observer - In the implementation block
+(id)backgroundAssertionWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(void)end;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(NSString *)taskName;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

