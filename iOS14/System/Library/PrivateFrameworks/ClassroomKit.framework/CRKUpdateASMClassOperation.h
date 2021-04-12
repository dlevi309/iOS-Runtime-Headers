/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class NSString, CRKASMCourseUpdateProperties;

@interface CRKUpdateASMClassOperation : CATOperation {

	NSString* _objectID;
	CRKASMCourseUpdateProperties* _properties;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy,readonly) CRKASMCourseUpdateProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(CRKASMCourseUpdateProperties *)properties;
-(BOOL)isAsynchronous;
-(NSString *)objectID;
-(id<CRKClassKitRosterRequirements>)requirements;
-(void)main;
-(id)initWithObjectID:(id)arg1 properties:(id)arg2 requirements:(id)arg3 ;
-(void)fetchClasses;
-(void)didFetchClasses:(id)arg1 error:(id)arg2 ;
-(id)classWithObjectID:(id)arg1 inClasses:(id)arg2 ;
-(void)applyPropertiesToClass:(id)arg1 ;
-(id)makePropertyApplicator;
-(void)saveClass:(id)arg1 ;
@end

