/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@interface PVCanceler : NSObject {

	BOOL _canceled;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)cancelerWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
@end

