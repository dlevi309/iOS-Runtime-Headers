/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@interface PVCanceler : NSObject {

	BOOL _canceled;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)cancelerWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)canceled;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end

