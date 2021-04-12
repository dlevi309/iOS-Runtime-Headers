/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationBasicDeclaration_Status : CEMPayloadBase {

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

