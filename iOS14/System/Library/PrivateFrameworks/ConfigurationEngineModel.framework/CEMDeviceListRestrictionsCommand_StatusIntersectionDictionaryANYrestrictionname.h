/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase {

	NSArray* _statusValues;

}

@property (nonatomic,copy) NSArray * statusValues;              //@synthesize statusValues=_statusValues - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithValues:(id)arg1 ;
+(id)buildRequiredOnlyWithValues:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusValues:(NSArray *)arg1 ;
-(NSArray *)statusValues;
@end

