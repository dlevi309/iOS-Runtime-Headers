/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression, NSArray;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSArray* _rangeArray;

}
-(NSRange)range;
-(id)regularExpression;
-(id)rangeArray;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
-(unsigned long long)numberOfRanges;
-(void)dealloc;
@end

