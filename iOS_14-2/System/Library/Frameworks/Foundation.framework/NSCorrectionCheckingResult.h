/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSubstitutionCheckingResult.h>

@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

	NSArray* _alternativeStrings;

}
+(BOOL)supportsSecureCoding;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(id)description;
-(id)alternativeStrings;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

