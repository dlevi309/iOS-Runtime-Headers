/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDictionary* _components;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 underlyingResult:(void*)arg3 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(id)components;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 ;
-(void*)underlyingResult;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void)dealloc;
@end

