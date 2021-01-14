/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest {

	NSSet* _appleIDs;

}

@property (nonatomic,copy) NSSet * appleIDs;              //@synthesize appleIDs=_appleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)appleIDs;
-(id)initWithCoder:(id)arg1 ;
-(void)setAppleIDs:(NSSet *)arg1 ;
@end

