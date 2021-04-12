/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject {

	BOOL _succeeded;
	IMRuntimeTest* _test;

}

@property (getter=hasSucceeded) BOOL succeeded;              //@synthesize succeeded=_succeeded - In the implementation block
@property (readonly) IMRuntimeTest * test;                   //@synthesize test=_test - In the implementation block
-(void)stop;
-(void)start;
-(void)setSucceeded:(BOOL)arg1 ;
-(id)initWithTest:(id)arg1 ;
-(void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4 ;
-(IMRuntimeTest *)test;
-(BOOL)hasSucceeded;
@end

