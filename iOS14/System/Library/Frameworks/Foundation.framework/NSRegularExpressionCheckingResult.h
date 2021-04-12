/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression * regularExpression; 
@property (readonly) NSArray * rangeArray; 
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRegularExpression *)regularExpression;
-(unsigned long long)resultType;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rangeArray;
-(NSRange)rangeWithName:(id)arg1 ;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
@end

