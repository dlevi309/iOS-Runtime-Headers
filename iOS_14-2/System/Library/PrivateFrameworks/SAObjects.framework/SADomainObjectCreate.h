/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class SADomainObject, NSString;

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>

@property (nonatomic,retain) SADomainObject * object; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)domainObjectCreate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)object;
-(void)setObject:(SADomainObject *)arg1 ;
@end

