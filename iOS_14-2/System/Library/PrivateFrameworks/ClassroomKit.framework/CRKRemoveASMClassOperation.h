/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKRemoveASMClassOperation : CATOperation {

	NSString* _objectID;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(BOOL)isAsynchronous;
-(NSString *)objectID;
-(id<CRKClassKitRosterRequirements>)requirements;
-(void)main;
-(void)removeClass:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 requirements:(id)arg2 ;
-(void)fetchClasses;
-(void)didFetchClasses:(id)arg1 error:(id)arg2 ;
-(id)classWithObjectID:(id)arg1 inClasses:(id)arg2 ;
@end

