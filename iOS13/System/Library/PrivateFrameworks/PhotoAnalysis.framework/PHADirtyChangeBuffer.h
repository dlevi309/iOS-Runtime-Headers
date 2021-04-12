/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject {

	NSMutableDictionary* _workInfosByWorkerType;

}

@property (nonatomic,retain) NSMutableDictionary * workInfosByWorkerType;              //@synthesize workInfosByWorkerType=_workInfosByWorkerType - In the implementation block
-(id)init;
-(id)snapshot;
-(void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3 ;
-(NSMutableDictionary *)workInfosByWorkerType;
-(void)setWorkInfosByWorkerType:(NSMutableDictionary *)arg1 ;
@end

