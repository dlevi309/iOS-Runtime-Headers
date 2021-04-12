/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAPropertyOverride : SADomainObject

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSString * value; 
+(id)propertyOverride;
+(id)propertyOverrideWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)encodedClassName;
@end

