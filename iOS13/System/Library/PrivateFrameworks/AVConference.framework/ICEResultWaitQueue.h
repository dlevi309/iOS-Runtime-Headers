/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface ICEResultWaitQueue : NSObject {

	NSMutableArray* queryList;
	opaque_pthread_cond_t resCond;
	opaque_pthread_mutex_t resMutex;

}
-(id)init;
-(void)dealloc;
-(id)copyResultForCallID:(unsigned)arg1 ;
-(void)addResult:(tagCONNRESULT*)arg1 forCallID:(unsigned)arg2 ;
@end

