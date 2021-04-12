/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@class NSTextCheckingResult, NSString;

@interface PRRecordedCorrection : NSObject {

	NSTextCheckingResult* _correctionResult;
	NSString* _correctedString;
	BOOL _hasRecordedResponse;

}

@property (assign) BOOL hasRecordedResponse;              //@synthesize hasRecordedResponse=_hasRecordedResponse - In the implementation block
-(id)description;
-(void)dealloc;
-(id)correctionResult;
-(id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2 ;
-(id)correctedString;
-(BOOL)hasRecordedResponse;
-(void)setHasRecordedResponse:(BOOL)arg1 ;
@end

