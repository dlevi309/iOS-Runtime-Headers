/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTInvocationRecord : NSObject <NSCopying> {

	/*^block*/id _block;
	/*^block*/id _failureBlock;
	NSString* _invocationDescription;

}

@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) NSString * invocationDescription;              //@synthesize invocationDescription=_invocationDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invoke;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)invokeFailure;
-(NSString *)invocationDescription;
-(void)setInvocationDescription:(NSString *)arg1 ;
@end

