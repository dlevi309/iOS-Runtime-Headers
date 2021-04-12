/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
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
+(unsigned long long)defaultPriority;
+(void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1 ;
+(CGSize)preferredModelInputSize;
+(BOOL)isANEDeviceAvailable;
-(void)setMinimumConfidence:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)minimumConfidence;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)boostEffectivePriority;
-(unsigned long long)effectivePriority;
-(void)resetEffectivePriority;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 metrics:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)priority;
-(id)_diagnosticNameForRequests:(id)arg1 metrics:(id)arg2 ;
-(void)setEffectivePriority:(unsigned long long)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
@end

