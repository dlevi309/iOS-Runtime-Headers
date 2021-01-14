/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class CXCallObserver;

@interface MNPhoneCallObserver : NSObject {

	CXCallObserver* _observer;

}
+(id)sharedPhoneCallObserver;
-(id)init;
-(void)_startObserving;
-(void)dealloc;
-(BOOL)hasActiveCalls;
-(BOOL)_isActiveCall:(id)arg1 ;
@end

