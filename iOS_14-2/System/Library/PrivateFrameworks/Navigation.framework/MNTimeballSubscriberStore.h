/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableArray, NSLock, NSArray;

@interface MNTimeballSubscriberStore : NSObject {

	NSMutableArray* _subscriptions;
	NSLock* _subscriptionsLock;

}

@property (nonatomic,readonly) NSArray * subscriptions; 
-(NSArray *)subscriptions;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
@end

