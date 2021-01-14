/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase {

	NSString* _statusEcho;

}

@property (nonatomic,copy) NSString * statusEcho;              //@synthesize statusEcho=_statusEcho - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
-(void)setStatusEcho:(NSString *)arg1 ;
-(NSString *)statusEcho;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

