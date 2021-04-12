/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (assign,nonatomic) long long rating; 
+(id)rateMediaEntity;
+(id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(long long)rating;
-(void)setRating:(long long)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteUID;
-(BOOL)requiresResponse;
-(void)setHashedRouteUID:(NSString *)arg1 ;
@end

