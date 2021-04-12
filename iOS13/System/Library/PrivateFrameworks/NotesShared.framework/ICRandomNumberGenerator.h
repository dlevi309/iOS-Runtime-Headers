/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICRandomNumberGenerator : NSObject {

	unsigned _randomSeed;

}
-(id)initWithSeed:(unsigned)arg1 ;
-(unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(double)randomFloat;
-(id)randomObject:(id)arg1 ;
@end

