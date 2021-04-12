/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SALocation *)address;
-(id)groupIdentifier;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(NSURL *)accountIdentifier;
-(NSString *)relationship;
-(NSDate *)birthday;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(void)setAddress:(SALocation *)arg1 ;
-(SAEmail *)email;
-(void)setEmail:(SAEmail *)arg1 ;
-(SAPhone *)phone;
-(void)setPhone:(SAPhone *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

