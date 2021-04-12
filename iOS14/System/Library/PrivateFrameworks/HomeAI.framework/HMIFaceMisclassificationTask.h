/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMITask.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIPersonFaceCrop;

@interface HMIFaceMisclassificationTask : HMITask {

	HMIPersonFaceCrop* _faceCrop;
	id<HMIHomePersonManagerDataSource> _dataSource;

}

@property (readonly) HMIPersonFaceCrop * faceCrop;                               //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)logCategory;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)main;
-(HMIPersonFaceCrop *)faceCrop;
-(id)initWithTaskID:(int)arg1 dataSource:(id)arg2 faceCrop:(id)arg3 ;
-(void)removeNearestFaceprint:(id)arg1 withFaceCrops:(id)arg2 ;
@end

