/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject {

	BOOL _allowAbstractTarget;
	BOOL _unitTesting;
	RBProcess* _process;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSAssertionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) id holdToken;                                       //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                   //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowAbstractTarget;                           //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;               //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptor:(id)arg2 ;
-(void)setUnitTesting:(BOOL)arg1 ;
-(RBSAssertionDescriptor *)descriptor;
-(RBProcess *)process;
-(BOOL)unitTesting;
-(id)holdToken;
-(void)setHoldToken:(id)arg1 ;
-(unsigned long long)acquisitionPolicy;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(BOOL)allowAbstractTarget;
@end

