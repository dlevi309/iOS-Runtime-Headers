/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAWeatherLocation;

@interface SAWeatherLocationDelete : SADomainCommand

@property (nonatomic,retain) SAWeatherLocation * weatherLocation; 
+(id)locationDelete;
+(id)locationDeleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAWeatherLocation *)weatherLocation;
-(void)setWeatherLocation:(SAWeatherLocation *)arg1 ;
@end

