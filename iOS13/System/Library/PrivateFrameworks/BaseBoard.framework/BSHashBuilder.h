/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(unsigned long long)hash;
-(id)appendString:(id)arg1 ;
-(id)appendCGFloat:(double)arg1 ;
-(id)appendDouble:(double)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(id)appendCGPoint:(CGPoint)arg1 ;
-(id)appendCGSize:(CGSize)arg1 ;
-(id)appendCGRect:(CGRect)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendBool:(BOOL)arg1 ;
-(id)appendInteger:(long long)arg1 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 ;
-(id)appendSizeT:(unsigned long long)arg1 ;
-(id)appendClass:(Class)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
-(id)appendArray:(id)arg1 ;
@end

