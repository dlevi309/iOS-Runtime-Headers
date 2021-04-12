/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIPersonManagerDataSource;
@class NSSet;

@interface HMIStoreFaceprintsOperation : HMFOperation {

	id<HMIPersonManagerDataSource> _dataSource;
	NSSet* _faceprints;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceprints;                                     //@synthesize faceprints=_faceprints - In the implementation block
+(id)logCategory;
-(id<HMIPersonManagerDataSource>)dataSource;
-(void)main;
-(NSSet *)faceprints;
-(id)initWithDataSource:(id)arg1 faceprints:(id)arg2 ;
@end

