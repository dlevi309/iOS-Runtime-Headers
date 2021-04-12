/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKASMRoster;
@class NSArray;

@interface CRKASMWorldBuildResultObject : NSObject {

	id<CRKASMRoster> _roster;
	NSArray* _manageableLocations;

}

@property (nonatomic,readonly) id<CRKASMRoster> roster;                         //@synthesize roster=_roster - In the implementation block
@property (nonatomic,copy,readonly) NSArray * manageableLocations;              //@synthesize manageableLocations=_manageableLocations - In the implementation block
-(id)init;
-(id<CRKASMRoster>)roster;
-(id)initWithRoster:(id)arg1 manageableLocations:(id)arg2 ;
-(NSArray *)manageableLocations;
@end

