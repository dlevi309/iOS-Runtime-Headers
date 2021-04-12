/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase {

	NSArray* _payloadApps;
	NSArray* _payloadWebSites;
	NSArray* _payloadCategories;

}

@property (nonatomic,copy) NSArray * payloadApps;                    //@synthesize payloadApps=_payloadApps - In the implementation block
@property (nonatomic,copy) NSArray * payloadWebSites;                //@synthesize payloadWebSites=_payloadWebSites - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategories;              //@synthesize payloadCategories=_payloadCategories - In the implementation block
+(id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 ;
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadCategories:(NSArray *)arg1 ;
-(void)setPayloadApps:(NSArray *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSArray *)payloadApps;
-(NSArray *)payloadCategories;
-(void)setPayloadWebSites:(NSArray *)arg1 ;
-(NSArray *)payloadWebSites;
@end

