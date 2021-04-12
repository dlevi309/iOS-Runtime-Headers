/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSScanner, _HKCFGNodeCache;

@interface _HKCFGParseContext : NSObject {

	NSScanner* _scanner;
	unsigned long long _lengthAllowance;
	unsigned long long _recursiveDepth;
	_HKCFGNodeCache* _cache;

}

@property (nonatomic,readonly) NSScanner * scanner;                             //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthAllowance;              //@synthesize lengthAllowance=_lengthAllowance - In the implementation block
@property (nonatomic,readonly) unsigned long long recursiveDepth;               //@synthesize recursiveDepth=_recursiveDepth - In the implementation block
@property (nonatomic,readonly) _HKCFGNodeCache * cache;                         //@synthesize cache=_cache - In the implementation block
-(_HKCFGNodeCache *)cache;
-(id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2 ;
-(void)incrementRecursiveDepth;
-(void)decrementRecursiveDepth;
-(void)decreaseLengthAllowance:(unsigned long long)arg1 ;
-(void)increaseLengthAllowance:(unsigned long long)arg1 ;
-(NSScanner *)scanner;
-(unsigned long long)lengthAllowance;
-(unsigned long long)recursiveDepth;
@end

