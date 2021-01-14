/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMRosterProviderDecoratorBase.h>

@interface CRKASMCourseSizeLimitingRosterProvider : CRKASMRosterProviderDecoratorBase {

	long long _maxUserCount;
	long long _maxTrustedUserCount;

}

@property (nonatomic,readonly) long long maxUserCount;                     //@synthesize maxUserCount=_maxUserCount - In the implementation block
@property (nonatomic,readonly) long long maxTrustedUserCount;              //@synthesize maxTrustedUserCount=_maxTrustedUserCount - In the implementation block
-(BOOL)isLegalToUpdateCourse:(id)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)courseForIdentifier:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)maxUserCount;
-(long long)maxTrustedUserCount;
-(id)initWithRosterProvider:(id)arg1 maxUserCount:(long long)arg2 maxTrustedUserCount:(long long)arg3 ;
@end

