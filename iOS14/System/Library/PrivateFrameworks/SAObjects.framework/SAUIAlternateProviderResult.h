/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, SAUIImageResource, NSString;

@interface SAUIAlternateProviderResult : SADomainObject

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,retain) SAUIImageResource * providerImage; 
@property (nonatomic,copy) NSString * providerName; 
+(id)alternateProviderResult;
+(id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(NSNumber *)numberOfResults;
-(SAUIImageResource *)providerImage;
-(void)setProviderImage:(SAUIImageResource *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)providerName;
@end

