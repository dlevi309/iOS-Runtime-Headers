/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSNumberFormatter;

@interface _DPInputHelper : NSObject {

	NSNumberFormatter* _fmt;

}

@property (nonatomic,readonly) NSNumberFormatter * fmt;              //@synthesize fmt=_fmt - In the implementation block
-(NSNumberFormatter *)fmt;
-(id)init;
-(id)numberFromString:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 separatedBy:(id)arg2 encoding:(unsigned long long)arg3 ;
-(id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)numbersFromFileAtPath:(id)arg1 ;
@end

