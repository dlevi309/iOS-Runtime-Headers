/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest {

	NSString* _recipient;

}

@property (nonatomic,retain) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRecipient:(NSString *)arg1 ;
-(NSString *)recipient;
@end

