/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)source;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(id)groupIdentifier;
-(NSString *)domainIdentifier;
-(id)encodedClassName;
-(NSNumber *)remote;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setRemote:(NSNumber *)arg1 ;
@end

