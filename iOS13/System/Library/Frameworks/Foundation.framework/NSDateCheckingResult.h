/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone, NSString;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	BOOL _timeIsSignificant;
	BOOL _timeIsApproximate;
	BOOL _timeIsPast;
	NSString* _leadingText;
	NSString* _trailingText;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) BOOL timeIsSignificant; 
@property (readonly) BOOL timeIsApproximate; 
@property (readonly) BOOL timeIsPast; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(NSTimeZone *)timeZone;
-(NSRange)range;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(double)duration;
-(NSDate *)referenceDate;
-(id)leadingText;
-(id)trailingText;
-(void*)underlyingResult;
-(BOOL)timeIsSignificant;
-(BOOL)timeIsApproximate;
-(BOOL)timeIsPast;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 leadingText:(id)arg10 trailingText:(id)arg11 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 ;
@end

