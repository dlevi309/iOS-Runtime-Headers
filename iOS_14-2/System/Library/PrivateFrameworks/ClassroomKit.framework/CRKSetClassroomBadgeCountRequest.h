/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest {

	long long _badgeCount;

}

@property (assign,nonatomic) long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)badgeCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBadgeCount:(long long)arg1 ;
@end

