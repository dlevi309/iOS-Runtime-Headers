/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {

	NSMutableArray* _observers;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTrackingObserver:(id)arg1 ;
-(void)broadcastCardSnippet:(id)arg1 ;
@end

