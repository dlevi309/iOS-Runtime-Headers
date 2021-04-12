/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)rating;
-(id)groupIdentifier;
-(NSString *)hashedRouteUID;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setRating:(long long)arg1 ;
-(void)setHashedRouteUID:(NSString *)arg1 ;
@end

