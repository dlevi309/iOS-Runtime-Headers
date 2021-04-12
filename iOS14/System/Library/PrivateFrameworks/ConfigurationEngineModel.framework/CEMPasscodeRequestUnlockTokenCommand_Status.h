/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase {

	NSData* _statusUnlockToken;

}

@property (nonatomic,copy) NSData * statusUnlockToken;              //@synthesize statusUnlockToken=_statusUnlockToken - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithUnlockToken:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusUnlockToken:(NSData *)arg1 ;
-(NSData *)statusUnlockToken;
@end

