/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

