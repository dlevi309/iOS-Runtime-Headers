/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject {

	NSData* _certificateData;
	NSData* _privateKeyData;

}

@property (nonatomic,copy) NSData * certificateData;              //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,copy) NSData * privateKeyData;               //@synthesize privateKeyData=_privateKeyData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)certificateData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)privateKeyData;
-(void)setPrivateKeyData:(NSData *)arg1 ;
@end

