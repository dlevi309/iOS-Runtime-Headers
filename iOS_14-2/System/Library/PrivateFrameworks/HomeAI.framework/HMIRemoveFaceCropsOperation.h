/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class NSSet;

@interface HMIRemoveFaceCropsOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	NSSet* _faceCropUUIDs;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceCropUUIDs;                                      //@synthesize faceCropUUIDs=_faceCropUUIDs - In the implementation block
+(id)logCategory;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)main;
-(id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 ;
-(NSSet *)faceCropUUIDs;
@end

