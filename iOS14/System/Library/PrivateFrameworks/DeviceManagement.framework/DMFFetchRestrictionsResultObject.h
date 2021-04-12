/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject {

	NSDictionary* _restrictions;
	NSDictionary* _globalRestrictions;
	NSDictionary* _profileRestrictions;

}

@property (nonatomic,copy,readonly) NSDictionary * restrictions;                     //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * globalRestrictions;               //@synthesize globalRestrictions=_globalRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * profileRestrictions;              //@synthesize profileRestrictions=_profileRestrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)restrictions;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)globalRestrictions;
-(id)initWithRestrictions:(id)arg1 ;
-(NSDictionary *)profileRestrictions;
@end

