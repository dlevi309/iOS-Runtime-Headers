/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(id)appendString:(id)arg1 ;
-(id)appendCGPoint:(CGPoint)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendCGSize:(CGSize)arg1 ;
-(id)appendCGRect:(CGRect)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
-(id)appendClass:(Class)arg1 ;
-(id)appendDouble:(double)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(id)appendArray:(id)arg1 ;
-(unsigned long long)hash;
-(id)appendUnsignedInteger:(unsigned long long)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)appendBool:(BOOL)arg1 ;
-(id)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)appendCGFloat:(double)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(id)appendInteger:(long long)arg1 ;
-(id)appendSizeT:(unsigned long long)arg1 ;
@end

