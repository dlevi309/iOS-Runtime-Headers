/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@interface _IKDOMBindingControllerUpdateRecord : NSObject {

	BOOL _cancelled;
	/*^block*/id _preUpdate;
	/*^block*/id _update;

}

@property (nonatomic,copy) id preUpdate;                                     //@synthesize preUpdate=_preUpdate - In the implementation block
@property (nonatomic,copy) id update;                                        //@synthesize update=_update - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(void)setUpdate:(id)arg1 ;
-(id)update;
-(BOOL)isCancelled;
-(id)preUpdate;
-(void)setPreUpdate:(id)arg1 ;
@end

