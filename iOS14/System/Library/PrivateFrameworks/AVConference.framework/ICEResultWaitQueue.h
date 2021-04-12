/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface ICEResultWaitQueue : NSObject {

	NSMutableArray* queryList;
	opaque_pthread_cond_t resCond;
	opaque_pthread_mutex_t resMutex;

}
-(void)addResult:(tagCONNRESULT*)arg1 forCallID:(unsigned)arg2 ;
-(id)init;
-(id)copyResultForCallID:(unsigned)arg1 ;
-(void)dealloc;
@end

