/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject

@property (nonatomic,copy) NSArray * additionalEnabledTransitMarkets; 
@property (nonatomic,copy) NSData * clientMetadata; 
@property (nonatomic,copy) NSString * environment; 
+(id)geoServicesData;
+(id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setClientMetadata:(NSData *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
-(NSString *)environment;
-(NSData *)clientMetadata;
@end

