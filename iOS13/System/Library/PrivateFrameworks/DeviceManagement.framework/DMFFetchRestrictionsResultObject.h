/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)restrictions;
-(NSDictionary *)globalRestrictions;
-(id)initWithRestrictions:(id)arg1 ;
-(NSDictionary *)profileRestrictions;
@end

