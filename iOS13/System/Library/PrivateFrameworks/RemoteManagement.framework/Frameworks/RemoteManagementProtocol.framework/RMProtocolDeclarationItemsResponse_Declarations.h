/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolDeclarationItemsResponse_Declarations : RMModelPayloadBase {

	NSArray* _responseActivations;
	NSArray* _responseConfigurations;
	NSArray* _responseAssets;

}

@property (nonatomic,copy) NSArray * responseActivations;                 //@synthesize responseActivations=_responseActivations - In the implementation block
@property (nonatomic,copy) NSArray * responseConfigurations;              //@synthesize responseConfigurations=_responseConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * responseAssets;                      //@synthesize responseAssets=_responseAssets - In the implementation block
+(id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 ;
+(id)buildRequiredOnlyWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 ;
+(id)allowedResponseKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseActivations:(NSArray *)arg1 ;
-(void)setResponseConfigurations:(NSArray *)arg1 ;
-(void)setResponseAssets:(NSArray *)arg1 ;
-(NSArray *)responseActivations;
-(NSArray *)responseConfigurations;
-(NSArray *)responseAssets;
@end

