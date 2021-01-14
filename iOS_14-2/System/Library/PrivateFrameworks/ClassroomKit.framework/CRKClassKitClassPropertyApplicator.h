/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassKitRosterRequirements;
@interface CRKClassKitClassPropertyApplicator : NSObject {

	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(id<CRKClassKitRosterRequirements>)requirements;
-(id)initWithRequirements:(id)arg1 ;
-(BOOL)additionsAndRemovalsIntersect:(id)arg1 ;
-(void)addUser:(id)arg1 toClass:(id)arg2 ;
-(void)removeUser:(id)arg1 fromClass:(id)arg2 ;
-(void)addTrustedUser:(id)arg1 toClass:(id)arg2 ;
-(void)removeTrustedUser:(id)arg1 fromClass:(id)arg2 ;
-(id)identifiersOfUsers:(id)arg1 ;
-(id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3 ;
@end

