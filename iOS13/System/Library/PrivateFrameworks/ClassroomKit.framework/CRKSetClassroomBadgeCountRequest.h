/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest {

	long long _badgeCount;

}

@property (assign,nonatomic) long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)badgeCount;
-(void)setBadgeCount:(long long)arg1 ;
@end

