/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientPruning.h>

@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning> {

	SRSensorPruner* _pruner;

}

@property (__weak) SRSensorPruner * pruner;              //@synthesize pruner=_pruner - In the implementation block
+(id)prunerClientWithPruner:(id)arg1 ;
-(id)initWithPruner:(id)arg1 ;
-(void)setPruner:(SRSensorPruner *)arg1 ;
-(SRSensorPruner *)pruner;
-(void)resetDatastoreFiles:(id)arg1 ;
@end

