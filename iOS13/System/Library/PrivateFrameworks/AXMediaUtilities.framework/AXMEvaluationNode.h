/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionEngineNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding> {

	double _minimumConfidence;
	unsigned long long _priority;
	unsigned long long _effectivePriority;

}

@property (assign,nonatomic) unsigned long long effectivePriority;              //@synthesize effectivePriority=_effectivePriority - In the implementation block
@property (assign,nonatomic) double minimumConfidence;                          //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                       //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1 ;
+(unsigned long long)defaultPriority;
+(BOOL)isANEDeviceAvailable;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(double)minimumConfidence;
-(void)setMinimumConfidence:(double)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)boostEffectivePriority;
-(unsigned long long)effectivePriority;
-(void)resetEffectivePriority;
-(id)_diagnosticNameForRequests:(id)arg1 diagnostics:(id)arg2 ;
-(void)setEffectivePriority:(unsigned long long)arg1 ;
@end

