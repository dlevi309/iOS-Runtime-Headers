/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSubstitutionCheckingResult.h>

@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

	NSArray* _alternativeStrings;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(id)alternativeStrings;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
@end

