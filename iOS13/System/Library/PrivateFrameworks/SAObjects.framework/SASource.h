/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)source;
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(id)groupIdentifier;
-(NSString *)accountIdentifier;
-(NSString *)accountName;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSNumber *)remote;
-(void)setAccountName:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setRemote:(NSNumber *)arg1 ;
@end

