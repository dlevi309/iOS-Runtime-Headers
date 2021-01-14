/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)unitTesting;
-(RBProcess *)process;
-(void)setUnitTesting:(BOOL)arg1 ;
-(id)holdToken;
-(RBSAssertionDescriptor *)descriptor;
-(BOOL)allowAbstractTarget;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(unsigned long long)acquisitionPolicy;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setHoldToken:(id)arg1 ;
@end

