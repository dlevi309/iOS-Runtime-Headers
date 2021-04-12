/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol NSObject, CSPowerStatusProviding;
@interface CSPowerChangeObserver : NSObject {

	id<NSObject> _notificationToken;
	id<CSPowerStatusProviding> _statusProvider;
	BOOL _connectedToPower;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isConnectedToPower,nonatomic) BOOL connectedToPower;              //@synthesize connectedToPower=_connectedToPower - In the implementation block
-(void)dealloc;
-(id)block;
-(void)update;
-(void)setBlock:(id)arg1 ;
-(void)setIsConnectedToPower:(BOOL)arg1 ;
-(id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(BOOL)isConnectedToPower;
-(void)setConnectedToPower:(BOOL)arg1 ;
@end

