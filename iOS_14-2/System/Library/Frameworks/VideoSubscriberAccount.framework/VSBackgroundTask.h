/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)end;
-(BOOL)begin;
-(id)init;
-(id<VSBackgroundTaskDelegate>)delegate;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)assertion;
-(NSString *)name;
-(void)setDelegate:(id<VSBackgroundTaskDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

