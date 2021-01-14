/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSMutableArray;

@interface SXMapSnapShotter : NSObject {

	NSMutableArray* _snapshotters;

}

@property (nonatomic,retain) NSMutableArray * snapshotters;              //@synthesize snapshotters=_snapshotters - In the implementation block
+(id)serialQueue;
-(id)init;
-(NSMutableArray *)snapshotters;
-(/*^block*/id)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSnapshotters:(NSMutableArray *)arg1 ;
@end

