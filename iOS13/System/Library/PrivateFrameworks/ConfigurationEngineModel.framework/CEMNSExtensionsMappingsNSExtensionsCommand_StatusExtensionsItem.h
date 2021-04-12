/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase {

	NSString* _statusIdentifier;
	NSString* _statusExtensionPoint;
	NSString* _statusDisplayName;

}

@property (nonatomic,copy) NSString * statusIdentifier;                  //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusExtensionPoint;              //@synthesize statusExtensionPoint=_statusExtensionPoint - In the implementation block
@property (nonatomic,copy) NSString * statusDisplayName;                 //@synthesize statusDisplayName=_statusDisplayName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(void)setStatusExtensionPoint:(NSString *)arg1 ;
-(void)setStatusDisplayName:(NSString *)arg1 ;
-(NSString *)statusExtensionPoint;
-(NSString *)statusDisplayName;
@end

