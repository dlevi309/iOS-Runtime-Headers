/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SIRINLURequestID, SIRINLUTurnInput, NSArray;

@interface SIRINLURequest : NSObject <NSSecureCoding> {

	SIRINLURequestID* _requestId;
	SIRINLUTurnInput* _currentTurnInput;
	NSArray* _previousTurnInputs;

}

@property (nonatomic,retain) SIRINLURequestID * requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) SIRINLUTurnInput * currentTurnInput;              //@synthesize currentTurnInput=_currentTurnInput - In the implementation block
@property (nonatomic,retain) NSArray * previousTurnInputs;                     //@synthesize previousTurnInputs=_previousTurnInputs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRequestId:(SIRINLURequestID *)arg1 ;
-(id)description;
-(SIRINLURequestID *)requestId;
-(id)initWithCoder:(id)arg1 ;
-(SIRINLUTurnInput *)currentTurnInput;
-(NSArray *)previousTurnInputs;
-(id)initWithRequestId:(id)arg1 currentTurnInput:(id)arg2 previousTurnInputs:(id)arg3 ;
-(void)setCurrentTurnInput:(SIRINLUTurnInput *)arg1 ;
-(void)setPreviousTurnInputs:(NSArray *)arg1 ;
@end

