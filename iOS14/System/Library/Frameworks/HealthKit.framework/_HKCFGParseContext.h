/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)recursiveDepth;
-(void)decrementRecursiveDepth;
-(unsigned long long)lengthAllowance;
-(void)decreaseLengthAllowance:(unsigned long long)arg1 ;
-(NSScanner *)scanner;
-(id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2 ;
-(void)increaseLengthAllowance:(unsigned long long)arg1 ;
-(void)incrementRecursiveDepth;
@end

