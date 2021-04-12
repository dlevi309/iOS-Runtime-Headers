/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject {

	BOOL _succeeded;
	IMRuntimeTest* _test;

}

@property (getter=hasSucceeded) BOOL succeeded;              //@synthesize succeeded=_succeeded - In the implementation block
@property (readonly) IMRuntimeTest * test;                   //@synthesize test=_test - In the implementation block
-(IMRuntimeTest *)test;
-(void)start;
-(id)initWithTest:(id)arg1 ;
-(void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4 ;
-(void)stop;
-(BOOL)hasSucceeded;
-(void)setSucceeded:(BOOL)arg1 ;
@end

