/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NUPattern;

@interface NURepeatPattern : NUPattern {

	NUPattern* _pattern;
	long long _minCount;
	long long _maxCount;

}

@property (readonly) NUPattern * pattern;              //@synthesize pattern=_pattern - In the implementation block
@property (readonly) long long minCount;               //@synthesize minCount=_minCount - In the implementation block
@property (readonly) long long maxCount;               //@synthesize maxCount=_maxCount - In the implementation block
-(long long)maxCount;
-(id)tokens;
-(id)stringRepresentation;
-(id)init;
-(NUPattern *)pattern;
-(long long)minCount;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(id)initWithPattern:(id)arg1 count:(long long)arg2 ;
-(id)initWithPattern:(id)arg1 minCount:(long long)arg2 ;
-(id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3 ;
-(BOOL)isEqualToRepeatPattern:(id)arg1 ;
@end

