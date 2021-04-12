/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class CRKASMCourseCreateProperties;

@interface CRKCreateASMClassOperation : CATOperation {

	CRKASMCourseCreateProperties* _properties;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) CRKASMCourseCreateProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(CRKASMCourseCreateProperties *)properties;
-(BOOL)isAsynchronous;
-(id<CRKClassKitRosterRequirements>)requirements;
-(void)main;
-(id)initWithProperties:(id)arg1 requirements:(id)arg2 ;
-(BOOL)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3 ;
-(void)validateParameters;
-(void)fetchInstructor;
-(void)validateDesiredLocationExistsForInstructor:(id)arg1 ;
-(BOOL)location:(id)arg1 hasMatchInLocations:(id)arg2 ;
-(void)constructClassWithInstructor:(id)arg1 ;
@end

