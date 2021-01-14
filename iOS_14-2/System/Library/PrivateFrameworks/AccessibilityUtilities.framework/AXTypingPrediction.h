/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString;

@interface AXTypingPrediction : NSObject {

	NSString* _fullWord;
	NSString* _textToInsert;
	NSString* _prefix;
	double _probability;
	NSRange _rangeToReplace;

}

@property (nonatomic,copy) NSString * fullWord;                   //@synthesize fullWord=_fullWord - In the implementation block
@property (nonatomic,copy) NSString * textToInsert;               //@synthesize textToInsert=_textToInsert - In the implementation block
@property (nonatomic,copy) NSString * prefix;                     //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange rangeToReplace;              //@synthesize rangeToReplace=_rangeToReplace - In the implementation block
@property (assign,nonatomic) double probability;                  //@synthesize probability=_probability - In the implementation block
-(NSString *)prefix;
-(double)probability;
-(NSString *)fullWord;
-(id)description;
-(void)setFullWord:(NSString *)arg1 ;
-(NSString *)textToInsert;
-(void)setTextToInsert:(NSString *)arg1 ;
-(NSRange)rangeToReplace;
-(void)setRangeToReplace:(NSRange)arg1 ;
-(void)setProbability:(double)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
@end

