/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionaryANYrestrictionname : CEMPayloadBase {

	NSNumber* _statusValue;

}

@property (nonatomic,copy) NSNumber * statusValue;              //@synthesize statusValue=_statusValue - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithValue:(id)arg1 ;
+(id)buildRequiredOnlyWithValue:(id)arg1 ;
-(NSNumber *)statusValue;
-(void)setStatusValue:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
@end

