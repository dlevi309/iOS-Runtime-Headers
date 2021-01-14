/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SADomainObject;

@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (nonatomic,retain) SADomainObject * domainItem; 
+(id)domainObjectPunchOut;
+(id)domainObjectPunchOutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)domainItem;
-(void)setDomainItem:(SADomainObject *)arg1 ;
@end

