/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {

	AXMPipelineContextInput* _previousInput;
	AXMPipelineContextInput* _currentInput;
	CGPoint _transpositionHistoryCircularBuffer[10];
	unsigned long long _transpositionHistoryLastRecordedIndex;
	BOOL _fillingHistoryBuffer;
	long long _registrationState;

}

@property (nonatomic,readonly) long long registrationState; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(long long)registrationState;
-(void)_resetTranspositionHistory;
-(id)_translationalImageRegistrationRequestForInput:(id)arg1 ;
-(void)_recordTransposition:(CGPoint)arg1 ;
-(void)_resetImageRegistration;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
@end

