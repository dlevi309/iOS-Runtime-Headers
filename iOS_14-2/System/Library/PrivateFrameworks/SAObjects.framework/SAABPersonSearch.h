/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)me;
-(void)setEmail:(SAEmail *)arg1 ;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(id)groupIdentifier;
-(NSString *)relationship;
-(void)setBirthday:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)setMe:(NSNumber *)arg1 ;
-(BOOL)requiresResponse;
-(NSURL *)accountIdentifier;
-(SAPhone *)phone;
-(NSDate *)birthday;
-(void)setRelationship:(NSString *)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)company;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setPhone:(SAPhone *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setName:(NSString *)arg1 ;
-(SAEmail *)email;
@end

