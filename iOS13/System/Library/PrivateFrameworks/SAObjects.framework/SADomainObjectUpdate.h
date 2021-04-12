/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SADomainObject *)identifier;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)addFields;
-(void)setAddFields:(SADomainObject *)arg1 ;
-(SADomainObject *)removeFields;
-(void)setRemoveFields:(SADomainObject *)arg1 ;
-(SADomainObject *)setFields;
-(void)setSetFields:(SADomainObject *)arg1 ;
@end

