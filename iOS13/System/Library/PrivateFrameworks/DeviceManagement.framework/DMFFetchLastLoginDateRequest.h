/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)appleIDs;
-(void)setAppleIDs:(NSSet *)arg1 ;
@end

