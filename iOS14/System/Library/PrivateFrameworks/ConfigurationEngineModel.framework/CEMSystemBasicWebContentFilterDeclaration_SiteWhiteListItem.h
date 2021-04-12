/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase {

	NSString* _payloadAddress;
	NSString* _payloadBookmarkPath;
	NSString* _payloadPageTitle;

}

@property (nonatomic,copy) NSString * payloadAddress;                   //@synthesize payloadAddress=_payloadAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadBookmarkPath;              //@synthesize payloadBookmarkPath=_payloadBookmarkPath - In the implementation block
@property (nonatomic,copy) NSString * payloadPageTitle;                 //@synthesize payloadPageTitle=_payloadPageTitle - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2 ;
+(id)buildRequiredOnlyWithAddress:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadAddress:(NSString *)arg1 ;
-(void)setPayloadPageTitle:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadAddress;
-(NSString *)payloadBookmarkPath;
-(void)setPayloadBookmarkPath:(NSString *)arg1 ;
-(NSString *)payloadPageTitle;
@end

