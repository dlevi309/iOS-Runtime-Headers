/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

