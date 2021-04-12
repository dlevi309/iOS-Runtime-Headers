/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectRetrieveCompleted;
+(id)domainObjectRetrieveCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

