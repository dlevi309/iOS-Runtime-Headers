/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceIdentifiable.h>

@class NSURL, NSString;

@interface SADomainObject : SABaseAceObject <SAAceIdentifiable>

@property (nonatomic,copy) NSURL * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSURL *)identifier;
@end

