/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase {

	NSString* _statusCode;
	NSArray* _statusErrorChain;

}

@property (nonatomic,copy) NSString * statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSArray * statusErrorChain;              //@synthesize statusErrorChain=_statusErrorChain - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithCode:(id)arg1 withErrorChain:(id)arg2 ;
+(id)buildRequiredOnlyWithCode:(id)arg1 ;
-(void)setStatusCode:(NSString *)arg1 ;
-(NSString *)statusCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusErrorChain:(NSArray *)arg1 ;
-(NSArray *)statusErrorChain;
@end

