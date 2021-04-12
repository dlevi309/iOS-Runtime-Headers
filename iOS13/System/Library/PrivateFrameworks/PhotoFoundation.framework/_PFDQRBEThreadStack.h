/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject {

	_PFDQRBEThreadStack* _next;
	unsigned long long _currentIndex;
	PFDispatchQueue* _activeQueues[8];

}
+(void)initialize;
+(id)stackForCurrentThread;
-(BOOL)isEmpty;
-(void)pushQueue:(id)arg1 ;
-(void)popQueue;
-(BOOL)containsQueue:(id)arg1 ;
@end

