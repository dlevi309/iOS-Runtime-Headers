/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigMetalExecutionStatus;

@interface InterceptConfig : NSObject {

	BOOL _waitUntilCompleted;
	BOOL _waitUntilScheduled;
	int _interceptLevel;
	FigMetalExecutionStatus* _executionStatus;

}

@property (assign,nonatomic) int interceptLevel;                                     //@synthesize interceptLevel=_interceptLevel - In the implementation block
@property (nonatomic,retain) FigMetalExecutionStatus * executionStatus;              //@synthesize executionStatus=_executionStatus - In the implementation block
@property (assign,nonatomic) BOOL waitUntilCompleted;                                //@synthesize waitUntilCompleted=_waitUntilCompleted - In the implementation block
@property (assign,nonatomic) BOOL waitUntilScheduled;                                //@synthesize waitUntilScheduled=_waitUntilScheduled - In the implementation block
-(BOOL)waitUntilCompleted;
-(BOOL)waitUntilScheduled;
-(id)initWithLevel:(int)arg1 ;
-(void)setWaitUntilCompleted:(BOOL)arg1 ;
-(void)setWaitUntilScheduled:(BOOL)arg1 ;
-(void)loadExperimentsConfig;
-(int)interceptLevel;
-(void)setInterceptLevel:(int)arg1 ;
-(FigMetalExecutionStatus *)executionStatus;
-(void)setExecutionStatus:(FigMetalExecutionStatus *)arg1 ;
@end

