/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
*/


@interface HTFenceAssertion : NSObject {

	unsigned long long __name;
	unsigned long long __startTime;

}
-(void)invalidate;
-(id)initWithFenceName:(unsigned long long)arg1 ;
-(void)blown;
@end

