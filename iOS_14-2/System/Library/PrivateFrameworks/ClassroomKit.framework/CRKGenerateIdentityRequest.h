/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest {

	NSString* _commonName;

}

@property (nonatomic,copy) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)commonName;
-(id)initWithCoder:(id)arg1 ;
-(void)setCommonName:(NSString *)arg1 ;
@end

