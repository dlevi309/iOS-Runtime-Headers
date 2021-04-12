/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject {

	NSDictionary* _courseIdentityInfosByGroupIdentifier;

}

@property (nonatomic,copy) NSDictionary * courseIdentityInfosByGroupIdentifier;              //@synthesize courseIdentityInfosByGroupIdentifier=_courseIdentityInfosByGroupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)courseIdentityInfosByGroupIdentifier;
-(void)setCourseIdentityInfosByGroupIdentifier:(NSDictionary *)arg1 ;
@end

