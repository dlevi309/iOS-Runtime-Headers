/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSTextCheckingResult, NSMutableString;

@interface PRTypologyCorrection : NSObject {

	NSString* _misspelling;
	NSRange _misspelledRange;
	NSTextCheckingResult* _correctionResult;
	NSMutableString* _logs;
	double _openTime;
	double _closeTime;
	BOOL _isOpen;

}
+(id)openTypologyCorrectionWithString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 ;
-(id)dictionaryRepresentation;
-(id)description;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(void)addTypologyCorrectionLog:(id)arg1 ;
-(void)closeTypologyCorrectionWithResult:(id)arg1 ;
@end

