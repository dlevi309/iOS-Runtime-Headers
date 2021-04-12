/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFSendEventRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _inReplyTo;
	NSString* _eventType;
	NSDictionary* _details;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inReplyTo;                           //@synthesize inReplyTo=_inReplyTo - In the implementation block
@property (nonatomic,copy) NSString * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSDictionary * details;                         //@synthesize details=_details - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)eventType;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
@end

