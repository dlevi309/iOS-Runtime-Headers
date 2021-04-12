/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFMutualExclusionAssertion : NSObject {

	BOOL _inCriticalSection;

}
-(void)enterCriticalSection;
-(void)leaveCriticalSection;
-(void)performCriticalSection:(/*^block*/id)arg1 ;
@end

