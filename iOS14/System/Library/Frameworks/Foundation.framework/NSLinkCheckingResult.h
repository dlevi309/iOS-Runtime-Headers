/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSURL* _url;

}
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(id)description;
-(id)URL;
-(id)initWithRange:(NSRange)arg1 URL:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void)dealloc;
@end

