/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPRangeArray : NSObject <NSCopying> {

	void* _rangeVectorOpaque;

}

@property (nonatomic,readonly) unsigned long long rangeCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long start; 
@property (nonatomic,readonly) unsigned long long finish; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)start;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(unsigned long long)finish;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeVector:(const void*)arg1 ;
-(NSRange*)rangeReferenceAtIndex:(unsigned long long)arg1 ;
-(void)removeRange:(NSRange)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

