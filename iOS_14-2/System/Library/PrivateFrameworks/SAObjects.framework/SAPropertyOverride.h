/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAPropertyOverride : SADomainObject

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSString * value; 
+(id)propertyOverride;
+(id)propertyOverrideWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)property;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setProperty:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

