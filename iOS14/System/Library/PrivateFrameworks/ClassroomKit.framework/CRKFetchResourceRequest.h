/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest {

	NSURL* _resourceURL;

}

@property (nonatomic,copy) NSURL * resourceURL;              //@synthesize resourceURL=_resourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
@end

