/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)fullWord;
-(void)setFullWord:(NSString *)arg1 ;
-(NSString *)textToInsert;
-(void)setTextToInsert:(NSString *)arg1 ;
-(NSRange)rangeToReplace;
-(void)setRangeToReplace:(NSRange)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end

