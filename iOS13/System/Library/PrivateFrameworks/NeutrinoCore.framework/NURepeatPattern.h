/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NUPattern *)pattern;
-(id)stringRepresentation;
-(id)tokens;
-(long long)minCount;
-(long long)maxCount;
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

