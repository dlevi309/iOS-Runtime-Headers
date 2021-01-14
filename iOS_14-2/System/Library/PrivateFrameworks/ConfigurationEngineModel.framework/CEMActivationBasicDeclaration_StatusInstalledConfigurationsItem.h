/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMActivationBasicDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase {

	NSString* _statusIdentifier;
	NSString* _statusServerHash;

}

@property (nonatomic,copy) NSString * statusIdentifier;              //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusServerHash;              //@synthesize statusServerHash=_statusServerHash - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(void)setStatusServerHash:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(NSString *)statusServerHash;
@end

