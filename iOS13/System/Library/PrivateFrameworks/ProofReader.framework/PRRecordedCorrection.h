/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@class NSTextCheckingResult, NSString;

@interface PRRecordedCorrection : NSObject {

	NSTextCheckingResult* _correctionResult;
	NSString* _correctedString;
	BOOL _hasRecordedResponse;

}

@property (assign) BOOL hasRecordedResponse;              //@synthesize hasRecordedResponse=_hasRecordedResponse - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2 ;
-(id)correctionResult;
-(id)correctedString;
-(BOOL)hasRecordedResponse;
-(void)setHasRecordedResponse:(BOOL)arg1 ;
@end

