/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@interface NSSpellCheckingResult : NSTextCheckingResult {

	NSRange _range;

}
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
@end

