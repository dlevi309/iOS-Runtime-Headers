/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invoke;
-(id)initWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(id)block;
-(void)setInvocationDescription:(NSString *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)invokeFailure;
-(void)setFailureBlock:(id)arg1 ;
-(NSString *)invocationDescription;
-(id)failureBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

