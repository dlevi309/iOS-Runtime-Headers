/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSArray* _addCommands;
	NSArray* _removeCommands;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * addCommands;                          //@synthesize addCommands=_addCommands - In the implementation block
@property (nonatomic,copy) NSArray * removeCommands;                       //@synthesize removeCommands=_removeCommands - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSArray *)addCommands;
-(NSArray *)removeCommands;
-(void)setAddCommands:(NSArray *)arg1 ;
-(void)setRemoveCommands:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

