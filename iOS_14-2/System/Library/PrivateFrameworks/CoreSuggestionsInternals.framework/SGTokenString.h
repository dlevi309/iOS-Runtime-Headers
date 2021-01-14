/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <Foundation/NSString.h>

@interface SGTokenString : NSString {

	NSRange _range;
	int _confidence;
	unsigned _isASCII : 1;
	unsigned _length : 31;
	SCD_Union_SG18 _contents;

}

@property (assign,nonatomic) NSRange range;               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) int confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)stringWithString:(id)arg1 ;
+(id)stringWithString:(id)arg1 range:(NSRange)arg2 confidence:(int)arg3 ;
+(id)stringWithString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)fastestEncoding;
-(int)confidence;
-(void)setRange:(NSRange)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSRange)range;
-(unsigned long long)length;
-(const unsigned short*)_fastCharacterContents;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(const char*)UTF8String;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringWithNewContents:(id)arg1 ;
@end

