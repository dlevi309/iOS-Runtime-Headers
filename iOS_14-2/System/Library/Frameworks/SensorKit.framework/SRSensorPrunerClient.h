/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientPruning.h>

@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning> {

	SRSensorPruner* _pruner;

}

@property (__weak) SRSensorPruner * pruner;              //@synthesize pruner=_pruner - In the implementation block
+(id)prunerClientWithPruner:(id)arg1 ;
-(SRSensorPruner *)pruner;
-(void)resetDatastoreFiles:(id)arg1 ;
-(id)initWithPruner:(id)arg1 ;
-(void)setPruner:(SRSensorPruner *)arg1 ;
@end

