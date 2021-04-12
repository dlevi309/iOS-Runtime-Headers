/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDictionary, NSSet;

@interface CRKSendIDSMessageRequest : CATTaskRequest {

	NSDictionary* _message;
	NSSet* _recipients;

}

@property (nonatomic,copy) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSSet * recipients;                  //@synthesize recipients=_recipients - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSSet *)recipients;
-(void)setRecipients:(NSSet *)arg1 ;
@end

