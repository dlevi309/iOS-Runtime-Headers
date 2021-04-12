/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKFetchBooksRequest : CATTaskRequest {

	BOOL _includeImages;

}

@property (assign,nonatomic) BOOL includeImages;              //@synthesize includeImages=_includeImages - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)includeImages;
-(void)setIncludeImages:(BOOL)arg1 ;
@end

