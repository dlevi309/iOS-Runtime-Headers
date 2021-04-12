/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)providerName;
-(NSNumber *)numberOfResults;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(SAUIImageResource *)providerImage;
-(void)setProviderImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
@end

