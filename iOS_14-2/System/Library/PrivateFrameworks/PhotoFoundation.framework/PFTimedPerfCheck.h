/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@interface PFTimedPerfCheck : NSObject {

	BOOL _isSessionCompleted;
	os_unfair_lock_s _sessionCompletedLock;
	pc_sessionRef _pc_session;
	double _initialProcessMemoryPeak;
	double _initialProcessMemoryCurrent;

}
+(id)start;
-(void)setup;
-(id)init;
-(id)stop;
-(id)endSessionAndReturnPerfCheckExtraInformation;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg1 ;
-(void)dealloc;
@end

