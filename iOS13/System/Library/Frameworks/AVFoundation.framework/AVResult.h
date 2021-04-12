/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSError;

@interface AVResult : NSObject {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	long long _status;
	NSError* _error;

}

@property (getter=isFailed,readonly) BOOL failed; 
-(id)init;
-(void)dealloc;
-(BOOL)isFailed;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)getStatus:(long long*)arg1 error:(id*)arg2 ;
@end

