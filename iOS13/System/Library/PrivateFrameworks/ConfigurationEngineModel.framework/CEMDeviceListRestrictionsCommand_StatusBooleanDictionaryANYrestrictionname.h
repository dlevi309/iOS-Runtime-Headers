/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase {

	NSNumber* _statusValue;

}

@property (nonatomic,copy) NSNumber * statusValue;              //@synthesize statusValue=_statusValue - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithValue:(id)arg1 ;
+(id)buildRequiredOnlyWithValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)statusValue;
-(void)setStatusValue:(NSNumber *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
@end

