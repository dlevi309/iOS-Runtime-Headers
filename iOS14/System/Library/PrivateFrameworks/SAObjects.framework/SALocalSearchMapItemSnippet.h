/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (assign,nonatomic) BOOL chainResultSet; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSArray * providerCommand; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (assign,nonatomic) BOOL searchAlongRoute; 
@property (nonatomic,retain) SALocation * searchRegionCenter; 
@property (nonatomic,copy) NSNumber * userCurrentLocation; 
+(id)mapItemSnippet;
+(id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)items;
-(NSArray *)providerCommand;
-(BOOL)chainResultSet;
-(void)setChainResultSet:(BOOL)arg1 ;
-(void)setProviderCommand:(NSArray *)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(BOOL)searchAlongRoute;
-(void)setSearchAlongRoute:(BOOL)arg1 ;
-(SALocation *)searchRegionCenter;
-(void)setSearchRegionCenter:(SALocation *)arg1 ;
-(NSNumber *)userCurrentLocation;
-(void)setUserCurrentLocation:(NSNumber *)arg1 ;
@end

