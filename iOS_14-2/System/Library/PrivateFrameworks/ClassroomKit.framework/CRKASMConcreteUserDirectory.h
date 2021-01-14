/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMUserDirectory.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory> {

	id<CRKClassKitRosterRequirements> _requirements;
	/*^block*/id _queryGenerator;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,readonly) id queryGenerator;                                           //@synthesize queryGenerator=_queryGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)studentDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2 ;
+(id)instructorDirectoryWithRosterRequirements:(id)arg1 locationIDs:(id)arg2 ;
-(id<CRKClassKitRosterRequirements>)requirements;
-(id)initWithRosterRequirements:(id)arg1 queryGenerator:(/*^block*/id)arg2 ;
-(id)queryGenerator;
-(id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(long long)arg3 ;
@end

