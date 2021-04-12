/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSNumberFormatter;

@interface _DPInputHelper : NSObject {

	NSNumberFormatter* _fmt;

}

@property (nonatomic,readonly) NSNumberFormatter * fmt;              //@synthesize fmt=_fmt - In the implementation block
-(id)init;
-(id)numberFromString:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 separatedBy:(id)arg2 encoding:(unsigned long long)arg3 ;
-(id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)numbersFromFileAtPath:(id)arg1 ;
-(NSNumberFormatter *)fmt;
@end

