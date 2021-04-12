/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSDictionary;

@interface CRKSendIDSMessageRequest : CATTaskRequest {

	NSString* _sourceAppleID;
	NSString* _destinationAddress;
	NSDictionary* _message;

}

@property (nonatomic,copy) NSString * sourceAppleID;                   //@synthesize sourceAppleID=_sourceAppleID - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;              //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSDictionary * message;                     //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)destinationAddress;
-(void)setSourceAppleID:(NSString *)arg1 ;
-(NSString *)sourceAppleID;
@end

