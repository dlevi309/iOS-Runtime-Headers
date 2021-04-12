/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableArray, NSLock, NSArray;

@interface MNTimeballSubscriberStore : NSObject {

	NSMutableArray* _subscriptions;
	NSLock* _subscriptionsLock;

}

@property (nonatomic,readonly) NSArray * subscriptions; 
-(id)init;
-(NSArray *)subscriptions;
-(void)subscribe:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
@end

