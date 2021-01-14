/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSError;

@interface AVResult : NSObject {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	long long _status;
	NSError* _error;

}

@property (getter=isFailed,readonly) BOOL failed; 
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(id)init;
-(void)getStatus:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)isFailed;
-(void)dealloc;
@end

