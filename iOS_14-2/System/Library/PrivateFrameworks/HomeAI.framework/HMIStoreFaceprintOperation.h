/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIFaceprint;

@interface HMIStoreFaceprintOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIFaceprint* _faceprint;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIFaceprint * faceprint;                                   //@synthesize faceprint=_faceprint - In the implementation block
+(id)logCategory;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)main;
-(HMIFaceprint *)faceprint;
-(id)initWithDataSource:(id)arg1 faceprint:(id)arg2 ;
@end

