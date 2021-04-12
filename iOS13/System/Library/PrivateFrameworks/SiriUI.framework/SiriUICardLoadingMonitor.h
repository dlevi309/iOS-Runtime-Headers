/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {

	NSMutableArray* _observers;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTrackingObserver:(id)arg1 ;
-(void)broadcastCardSnippet:(id)arg1 ;
@end

