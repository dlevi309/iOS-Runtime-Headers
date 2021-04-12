/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

