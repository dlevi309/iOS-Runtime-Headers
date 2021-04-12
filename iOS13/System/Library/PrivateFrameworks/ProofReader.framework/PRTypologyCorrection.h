/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)addTypologyCorrectionLog:(id)arg1 ;
-(void)closeTypologyCorrectionWithResult:(id)arg1 ;
@end

