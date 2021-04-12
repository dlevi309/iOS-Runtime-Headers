/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSArray;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase {

	NSNumber* _statusFirewallEnabled;
	NSNumber* _statusBlockAllIncoming;
	NSNumber* _statusStealthMode;
	NSArray* _statusApplications;

}

@property (nonatomic,copy) NSNumber * statusFirewallEnabled;               //@synthesize statusFirewallEnabled=_statusFirewallEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusBlockAllIncoming;              //@synthesize statusBlockAllIncoming=_statusBlockAllIncoming - In the implementation block
@property (nonatomic,copy) NSNumber * statusStealthMode;                   //@synthesize statusStealthMode=_statusStealthMode - In the implementation block
@property (nonatomic,copy) NSArray * statusApplications;                   //@synthesize statusApplications=_statusApplications - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusFirewallEnabled:(NSNumber *)arg1 ;
-(void)setStatusBlockAllIncoming:(NSNumber *)arg1 ;
-(void)setStatusStealthMode:(NSNumber *)arg1 ;
-(void)setStatusApplications:(NSArray *)arg1 ;
-(NSNumber *)statusFirewallEnabled;
-(NSNumber *)statusBlockAllIncoming;
-(NSNumber *)statusStealthMode;
-(NSArray *)statusApplications;
@end
