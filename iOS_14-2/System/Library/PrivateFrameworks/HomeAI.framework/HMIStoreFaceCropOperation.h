/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIFaceCrop;

@interface HMIStoreFaceCropOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIFaceCrop* _faceCrop;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIFaceCrop * faceCrop;                                     //@synthesize faceCrop=_faceCrop - In the implementation block
+(id)logCategory;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)main;
-(HMIFaceCrop *)faceCrop;
-(id)initWithDataSource:(id)arg1 faceCrop:(id)arg2 ;
@end

