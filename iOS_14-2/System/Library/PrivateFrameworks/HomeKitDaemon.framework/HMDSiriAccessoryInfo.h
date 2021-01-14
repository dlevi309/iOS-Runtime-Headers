/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

