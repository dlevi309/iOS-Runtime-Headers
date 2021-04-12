/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase {

	NSString* _payloadType;
	NSString* _payloadDisplayName;
	NSString* _payloadBundleID;
	NSArray* _payloadPages;
	NSString* _payloadURL;

}

@property (nonatomic,copy) NSString * payloadType;                     //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,copy) NSString * payloadDisplayName;              //@synthesize payloadDisplayName=_payloadDisplayName - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleID;                 //@synthesize payloadBundleID=_payloadBundleID - In the implementation block
@property (nonatomic,copy) NSArray * payloadPages;                     //@synthesize payloadPages=_payloadPages - In the implementation block
@property (nonatomic,copy) NSString * payloadURL;                      //@synthesize payloadURL=_payloadURL - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithType:(id)arg1 ;
+(id)buildWithType:(id)arg1 withDisplayName:(id)arg2 withBundleID:(id)arg3 withPages:(id)arg4 withURL:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadType;
-(NSString *)payloadBundleID;
-(NSString *)payloadURL;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadURL:(NSString *)arg1 ;
-(void)setPayloadPages:(NSArray *)arg1 ;
-(NSArray *)payloadPages;
-(void)setPayloadDisplayName:(NSString *)arg1 ;
-(void)setPayloadBundleID:(NSString *)arg1 ;
-(NSString *)payloadDisplayName;
@end

