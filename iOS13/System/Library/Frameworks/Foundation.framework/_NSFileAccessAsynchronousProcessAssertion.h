/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {

	int _pid;
	NSString* _name;
	BKSProcessAssertion* _assertion;

}

@property (readonly) int PID;              //@synthesize pid=_pid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)initWithPID:(int)arg1 name:(id)arg2 ;
-(void)beginAssertion;
-(int)PID;
@end

