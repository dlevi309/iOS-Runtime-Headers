/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSEqualsBuilder : NSObject {

	BOOL _equal;

}
+(id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2 ;
+(id)builder;
-(id)appendFloat:(float)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendBool:(BOOL)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendSizeT:(unsigned long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendEqualsBlocks:(/*^block*/id)arg1 ;
-(id)init;
-(id)appendInteger:(long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGFloat:(double)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGSize:(CGSize)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendArray:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(BOOL)isEqual;
-(id)appendObject:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendClass:(Class)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendDouble:(double)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGPoint:(CGPoint)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendPointer:(void*)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendString:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGRect:(CGRect)arg1 counterpart:(/*^block*/id)arg2 ;
@end

