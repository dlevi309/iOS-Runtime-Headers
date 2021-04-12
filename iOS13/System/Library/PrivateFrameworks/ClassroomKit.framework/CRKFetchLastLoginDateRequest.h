/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet;

@interface CRKFetchLastLoginDateRequest : CATTaskRequest {

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

