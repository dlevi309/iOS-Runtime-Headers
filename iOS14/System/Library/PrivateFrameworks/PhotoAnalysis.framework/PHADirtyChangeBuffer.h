/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject {

	NSMutableDictionary* _workInfosByWorkerType;

}

@property (nonatomic,retain) NSMutableDictionary * workInfosByWorkerType;              //@synthesize workInfosByWorkerType=_workInfosByWorkerType - In the implementation block
-(id)snapshot;
-(void)setWorkInfosByWorkerType:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3 ;
-(NSMutableDictionary *)workInfosByWorkerType;
@end

