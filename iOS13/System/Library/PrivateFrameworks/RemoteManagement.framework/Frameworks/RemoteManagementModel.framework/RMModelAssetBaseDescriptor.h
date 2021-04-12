/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelAssetBaseDescriptor : RMModelPayloadBase {

	NSString* _payloadTitle;
	NSString* _payloadDescription;

}

@property (nonatomic,copy) NSString * payloadTitle;                    //@synthesize payloadTitle=_payloadTitle - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTitle:(id)arg1 ;
+(id)buildWithTitle:(id)arg1 description:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadDescription;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadTitle;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

