/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICRandomNumberGenerator : NSObject {

	unsigned _randomSeed;

}
-(unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(id)initWithSeed:(unsigned)arg1 ;
-(double)randomFloat;
-(id)randomObject:(id)arg1 ;
@end

