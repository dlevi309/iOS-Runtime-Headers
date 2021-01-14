/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSDictionary;

@interface RMModelAnyPayload : RMModelPayloadBase {

	NSDictionary* _dictKeys;

}

@property (nonatomic,copy) NSDictionary * dictKeys;              //@synthesize dictKeys=_dictKeys - In the implementation block
+(id)buildFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(NSDictionary *)dictKeys;
-(void)setDictKeys:(NSDictionary *)arg1 ;
@end

