/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest {

	NSString* _recipient;

}

@property (nonatomic,retain) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecipient:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recipient;
@end

