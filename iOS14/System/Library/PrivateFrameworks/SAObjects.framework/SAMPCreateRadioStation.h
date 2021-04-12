/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, NSNumber, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSURL * stationUrl; 
+(id)createRadioStation;
+(id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)stationUrl;
-(void)setStationUrl:(NSURL *)arg1 ;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

