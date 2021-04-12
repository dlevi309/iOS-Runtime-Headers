/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassKitRosterRequirements;
@class NSObject;

@interface CRKASMRosterUpdater : NSObject {

	NSObject*<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(NSObject*<CRKClassKitRosterRequirements>)requirements;
-(id)initWithRequirements:(id)arg1 ;
-(/*^block*/id)errorWrappingCompletionForCompletion:(/*^block*/id)arg1 selectorName:(id)arg2 ;
-(void)createClassOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)objectIDForCourseWithIdentifier:(id)arg1 inRoster:(id)arg2 error:(id*)arg3 ;
-(void)updateClassOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2 ;
-(void)createClassWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 roster:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeCourseWithIdentifier:(id)arg1 roster:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

