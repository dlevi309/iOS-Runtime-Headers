/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@interface SXDelayed : NSObject {

	BOOL _cancelled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)execute:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)invoke;
-(void)cancel;
-(id)block;
-(BOOL)cancelled;
-(void)setBlock:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
@end

