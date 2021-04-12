/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray, NSDate;

@interface DMFFetchStreamEventsRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSArray* _eventIdentifiers;
	NSDate* _startDate;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * eventIdentifiers;                     //@synthesize eventIdentifiers=_eventIdentifiers - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSArray *)eventIdentifiers;
-(NSString *)organizationIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEventIdentifiers:(NSArray *)arg1 ;
@end

