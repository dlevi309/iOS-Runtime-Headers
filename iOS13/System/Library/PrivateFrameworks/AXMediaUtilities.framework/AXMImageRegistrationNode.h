/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(void)_resetTranspositionHistory;
-(id)_translationalImageRegistrationRequestForInput:(id)arg1 ;
-(void)_recordTransposition:(CGPoint)arg1 ;
-(void)_resetImageRegistration;
-(long long)registrationState;
@end

