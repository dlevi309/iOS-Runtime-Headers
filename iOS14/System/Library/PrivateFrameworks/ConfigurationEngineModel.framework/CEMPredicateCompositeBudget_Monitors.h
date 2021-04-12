/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase {

	NSArray* _payloadApps;
	NSArray* _payloadWebSites;
	NSArray* _payloadCategories;
	NSArray* _payloadCategoriesVersion2;

}

@property (nonatomic,copy) NSArray * payloadApps;                            //@synthesize payloadApps=_payloadApps - In the implementation block
@property (nonatomic,copy) NSArray * payloadWebSites;                        //@synthesize payloadWebSites=_payloadWebSites - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategories;                      //@synthesize payloadCategories=_payloadCategories - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategoriesVersion2;              //@synthesize payloadCategoriesVersion2=_payloadCategoriesVersion2 - In the implementation block
+(id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4 ;
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadCategoriesVersion2;
-(NSArray *)payloadCategories;
-(void)setPayloadCategoriesVersion2:(NSArray *)arg1 ;
-(void)setPayloadCategories:(NSArray *)arg1 ;
-(void)setPayloadApps:(NSArray *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSArray *)payloadApps;
-(void)setPayloadWebSites:(NSArray *)arg1 ;
-(NSArray *)payloadWebSites;
@end

