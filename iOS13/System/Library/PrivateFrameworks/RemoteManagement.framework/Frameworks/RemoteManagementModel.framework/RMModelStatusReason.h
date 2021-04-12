/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelStatusReason : RMModelPayloadBase {

	NSString* _statusCode;
	NSString* _statusDescription;
	RMModelAnyPayload* _statusDetails;

}

@property (nonatomic,copy) NSString * statusCode;                          //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                   //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * statusDetails;              //@synthesize statusDetails=_statusDetails - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithCode:(id)arg1 ;
+(id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusCode;
-(void)setStatusCode:(NSString *)arg1 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setStatusDetails:(RMModelAnyPayload *)arg1 ;
-(RMModelAnyPayload *)statusDetails;
@end

