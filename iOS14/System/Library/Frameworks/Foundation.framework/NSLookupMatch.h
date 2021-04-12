/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSTextCheckingResult, NSString;

@interface NSLookupMatch : NSObject {

	unsigned long long _matchType;
	NSRange _range;
	double _score;
	NSTextCheckingResult* _dataDetectorResult;
	NSString* _languageIdentifier;

}

@property (retain) NSTextCheckingResult * dataDetectorResult;              //@synthesize dataDetectorResult=_dataDetectorResult - In the implementation block
@property (retain) NSString * languageIdentifier;                          //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
@property (readonly) unsigned long long matchType;                         //@synthesize matchType=_matchType - In the implementation block
@property (readonly) NSRange range;                                        //@synthesize range=_range - In the implementation block
@property (readonly) double score;                                         //@synthesize score=_score - In the implementation block
+(id)matchesInString:(id)arg1 types:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)range;
-(double)score;
-(id)initWithType:(unsigned long long)arg1 range:(NSRange)arg2 score:(double)arg3 ;
-(id)description;
-(void)setDataDetectorResult:(NSTextCheckingResult *)arg1 ;
-(void)setLanguageIdentifier:(NSString *)arg1 ;
-(NSTextCheckingResult *)dataDetectorResult;
-(NSString *)languageIdentifier;
-(void)dealloc;
-(unsigned long long)matchType;
@end

