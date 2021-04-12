/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class SADomainObject, NSString;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,retain) SADomainObject * addFields; 
@property (nonatomic,retain) SADomainObject * identifier; 
@property (nonatomic,retain) SADomainObject * removeFields; 
@property (nonatomic,retain) SADomainObject * setFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectUpdate;
+(id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SADomainObject *)removeFields;
-(void)setRemoveFields:(SADomainObject *)arg1 ;
-(SADomainObject *)setFields;
-(id)encodedClassName;
-(void)setSetFields:(SADomainObject *)arg1 ;
-(BOOL)requiresResponse;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(SADomainObject *)identifier;
-(SADomainObject *)addFields;
-(void)setAddFields:(SADomainObject *)arg1 ;
@end

