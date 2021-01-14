/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject {

	NSDictionary* _credentials;

}

@property (nonatomic,copy) NSDictionary * credentials;              //@synthesize credentials=_credentials - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)credentials;
-(id)initWithCoder:(id)arg1 ;
-(void)setCredentials:(NSDictionary *)arg1 ;
@end

