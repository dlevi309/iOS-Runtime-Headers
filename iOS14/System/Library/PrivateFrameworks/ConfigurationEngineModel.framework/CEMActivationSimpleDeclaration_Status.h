/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationSimpleDeclaration_Status : CEMPayloadBase {

	NSArray* _statusInstalledConfigurations;

}

@property (nonatomic,copy) NSArray * statusInstalledConfigurations;              //@synthesize statusInstalledConfigurations=_statusInstalledConfigurations - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInstalledConfigurations:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInstalledConfigurations:(NSArray *)arg1 ;
-(NSArray *)statusInstalledConfigurations;
@end

