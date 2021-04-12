/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface HMDSiriAccessoryInfo : NSObject {

	BOOL _supportsDragonSiri;
	id _targetsAccessory;

}

@property (assign,nonatomic,__weak) id targetsAccessory;              //@synthesize targetsAccessory=_targetsAccessory - In the implementation block
@property (assign,nonatomic) BOOL supportsDragonSiri;                 //@synthesize supportsDragonSiri=_supportsDragonSiri - In the implementation block
+(id)infoWithTargetableAccessory:(id)arg1 ;
-(void)setTargetsAccessory:(id)arg1 ;
-(id)targetsAccessory;
-(BOOL)supportsDragonSiri;
-(BOOL)isActiveAndSupportsDragonSiri;
-(void)setSupportsDragonSiri:(BOOL)arg1 ;
@end

