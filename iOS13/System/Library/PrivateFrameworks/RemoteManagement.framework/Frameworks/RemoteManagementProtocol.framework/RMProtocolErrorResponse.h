/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolErrorResponse : RMModelPayloadBase {

	NSString* _responseCode;
	NSString* _responseDescription;
	RMModelAnyPayload* _responseDetails;

}

@property (nonatomic,copy) NSString * responseCode;                          //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,copy) NSString * responseDescription;                   //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responseDetails;              //@synthesize responseDetails=_responseDetails - In the implementation block
+(id)requestWithCode:(id)arg1 description:(id)arg2 details:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseCode;
-(void)setResponseCode:(NSString *)arg1 ;
-(void)setResponseDescription:(NSString *)arg1 ;
-(NSString *)responseDescription;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseDetails:(RMModelAnyPayload *)arg1 ;
-(RMModelAnyPayload *)responseDetails;
@end

