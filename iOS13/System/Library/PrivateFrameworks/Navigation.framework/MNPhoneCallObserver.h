/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class CXCallObserver;

@interface MNPhoneCallObserver : NSObject {

	CXCallObserver* _observer;

}
+(id)sharedPhoneCallObserver;
-(id)init;
-(void)dealloc;
-(void)_startObserving;
-(BOOL)hasActiveCalls;
-(BOOL)_isActiveCall:(id)arg1 ;
@end

