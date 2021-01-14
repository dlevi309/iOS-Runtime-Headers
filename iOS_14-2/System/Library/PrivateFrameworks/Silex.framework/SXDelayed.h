/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@interface SXDelayed : NSObject {

	BOOL _cancelled;
	/*^block*/id _block;
	SXDelayed* _strongReference;

}

@property (nonatomic,copy) id block;                                   //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) SXDelayed * strongReference;              //@synthesize strongReference=_strongReference - In the implementation block
+(id)execute:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)invoke;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
-(SXDelayed *)strongReference;
-(void)setStrongReference:(SXDelayed *)arg1 ;
@end

