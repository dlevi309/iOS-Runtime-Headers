/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

