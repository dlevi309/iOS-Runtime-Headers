/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSTextCheckingResult;

@interface PRTypologyCandidate : NSObject {

	NSString* _candidateString;
	NSRange _selectedRange;
	NSTextCheckingResult* _result;
	double _openTime;
	double _closeTime;
	BOOL _isOpen;

}
+(id)openTypologyCandidate:(id)arg1 selectedRange:(NSRange)arg2 inString:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)closeTypologyCandidateWithResult:(id)arg1 ;
@end

