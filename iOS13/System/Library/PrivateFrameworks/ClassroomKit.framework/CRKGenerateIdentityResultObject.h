/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)certificateData;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)privateKeyData;
-(void)setPrivateKeyData:(NSData *)arg1 ;
@end

