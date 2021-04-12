/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)popQueue;
-(BOOL)isEmpty;
-(void)pushQueue:(id)arg1 ;
-(BOOL)containsQueue:(id)arg1 ;
@end

