/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)assetInfo;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSNumber *)startPlaying;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSURL *)stationUrl;
-(void)setStationUrl:(NSURL *)arg1 ;
@end

