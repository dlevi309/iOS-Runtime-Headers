/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSURL *)identifier;
@end

