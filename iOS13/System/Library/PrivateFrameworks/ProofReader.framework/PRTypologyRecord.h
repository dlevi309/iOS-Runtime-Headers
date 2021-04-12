/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSArray, NSValue, NSMutableArray;

@interface PRTypologyRecord : NSObject {

	NSString* _string;
	NSRange _range;
	NSString* _language;
	NSArray* _languages;
	NSString* _appIdentifier;
	NSValue* _selectedRangeValue;
	NSArray* _topLanguages;
	NSArray* _keyEventArray;
	NSMutableArray* _typologyCorrections;
	NSMutableArray* _typologyCandidates;
	NSArray* _results;
	double _openTime;
	double _closeTime;
	unsigned long long _offset;
	BOOL _autocorrect;
	BOOL _initialCapitalize;
	BOOL _autocapitalize;
	BOOL _isOpen;

}
+(id)currentTypologyRecord;
+(id)openTypologyRecordWithString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(BOOL)arg6 initialCapitalize:(BOOL)arg7 autocapitalize:(BOOL)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11 ;
+(void)writeTypologyRecords;
+(void)resetTypologyRecords;
+(void)setTypologyRecordsLimit:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)addCandidate:(id)arg1 ;
-(void)addCorrection:(id)arg1 ;
-(id)initWithString:(id)arg1 offset:(unsigned long long)arg2 range:(NSRange)arg3 language:(id)arg4 languages:(id)arg5 topLanguages:(id)arg6 autocorrect:(BOOL)arg7 initialCapitalize:(BOOL)arg8 autocapitalize:(BOOL)arg9 keyEventArray:(id)arg10 appIdentifier:(id)arg11 selectedRangeValue:(id)arg12 ;
-(void)closeTypologyRecordWithResults:(id)arg1 ;
@end

