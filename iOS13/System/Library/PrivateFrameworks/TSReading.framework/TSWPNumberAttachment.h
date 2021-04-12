/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment {

	int _numberFormat;
	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) int numberFormat;                  //@synthesize numberFormat=_numberFormat - In the implementation block
-(void)dealloc;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)stringEquivalent;
-(id)stringEquivalentWithLayoutParent:(id)arg1 ;
-(id)stringWithNumber:(unsigned long long)arg1 ;
@end

