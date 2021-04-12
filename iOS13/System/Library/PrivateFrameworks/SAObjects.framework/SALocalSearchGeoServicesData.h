/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSData *)clientMetadata;
-(void)setClientMetadata:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
@end

