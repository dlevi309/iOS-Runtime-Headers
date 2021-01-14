/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestCommandCommand_Status : CEMPayloadBase {

	NSString* _statusEcho;

}

@property (nonatomic,copy) NSString * statusEcho;              //@synthesize statusEcho=_statusEcho - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusEcho:(NSString *)arg1 ;
-(NSString *)statusEcho;
@end

