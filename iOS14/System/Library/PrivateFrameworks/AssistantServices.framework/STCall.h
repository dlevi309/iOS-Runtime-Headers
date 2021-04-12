/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject {

	long long _service;
	STContactAddress* _initiatorAddress;
	STContactAddress* _recipientAddress;

}
+(BOOL)supportsSecureCoding;
-(void)setRecipientAddress:(id)arg1 ;
-(id)recipientAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_aceContextObjectValue;
-(void)setService:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initiatorAddress;
-(void)setInitiatorAddress:(id)arg1 ;
-(long long)service;
@end

