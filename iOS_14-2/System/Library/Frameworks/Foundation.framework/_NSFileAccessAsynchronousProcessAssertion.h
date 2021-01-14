/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {

	int _pid;
	NSString* _name;
	BKSProcessAssertion* _assertion;

}

@property (readonly) int PID;              //@synthesize pid=_pid - In the implementation block
-(void)beginAssertion;
-(id)initWithPID:(int)arg1 name:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(int)PID;
@end

