/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
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

