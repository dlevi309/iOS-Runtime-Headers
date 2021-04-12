/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSBackgroundTaskDelegate;
@class NSString, BKSProcessAssertion;

@interface VSBackgroundTask : NSObject {

	NSString* _name;
	id<VSBackgroundTaskDelegate> _delegate;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;                           //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<VSBackgroundTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSString *)name;
-(id<VSBackgroundTaskDelegate>)delegate;
-(void)setDelegate:(id<VSBackgroundTaskDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)end;
-(BOOL)begin;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
@end

