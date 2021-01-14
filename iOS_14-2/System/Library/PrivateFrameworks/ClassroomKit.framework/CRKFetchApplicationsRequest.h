/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface CRKFetchApplicationsRequest : CATTaskRequest {

	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIdentifiers;
@end

