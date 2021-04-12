/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolDeclarationItemsResponse_DeclarationItem : RMModelPayloadBase {

	NSString* _responseIdentifier;
	NSString* _responseServerToken;

}

@property (nonatomic,copy) NSString * responseIdentifier;               //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;              //@synthesize responseServerToken=_responseServerToken - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseIdentifier;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end

