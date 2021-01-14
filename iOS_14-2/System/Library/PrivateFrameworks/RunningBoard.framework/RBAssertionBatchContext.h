/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class RBProcess, NSArray;

@interface RBAssertionBatchContext : NSObject {

	BOOL _allowAbstractTarget;
	BOOL _unitTesting;
	RBProcess* _process;
	NSArray* _descriptorsToAcquire;
	NSArray* _identifiersToInvalidate;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                                 //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptorsToAcquire;                 //@synthesize descriptorsToAcquire=_descriptorsToAcquire - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifiersToInvalidate;              //@synthesize identifiersToInvalidate=_identifiersToInvalidate - In the implementation block
@property (nonatomic,retain) id holdToken;                                          //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                      //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowAbstractTarget;                              //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;                  //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptorsToAcquire:(id)arg2 identifiersToInvalidate:(id)arg3 ;
+(id)contextForProcess:(id)arg1 acquisitionCompletionPolicy:(unsigned long long)arg2 withDescriptorsToAcquire:(id)arg3 identifiersToInvalidate:(id)arg4 ;
-(BOOL)unitTesting;
-(RBProcess *)process;
-(void)setUnitTesting:(BOOL)arg1 ;
-(id)acquisitionContextForDescriptor:(id)arg1 ;
-(NSArray *)identifiersToInvalidate;
-(id)holdToken;
-(BOOL)allowAbstractTarget;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(NSArray *)descriptorsToAcquire;
-(unsigned long long)acquisitionPolicy;
-(id)_init;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
-(void)setHoldToken:(id)arg1 ;
@end

