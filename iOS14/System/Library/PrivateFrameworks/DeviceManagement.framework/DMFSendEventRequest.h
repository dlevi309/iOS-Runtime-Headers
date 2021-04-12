/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)details;
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
@end

