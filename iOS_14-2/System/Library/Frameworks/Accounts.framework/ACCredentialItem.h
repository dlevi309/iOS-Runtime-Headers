/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>

@class NSString, NSDate, NSURL, ACAccountStore, NSMutableSet, NSSet;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding> {

	NSString* _accountIdentifier;
	NSDate* _expirationDate;
	NSString* _serviceName;
	BOOL _persistent;
	NSURL* _objectID;
	ACAccountStore* _accountStore;
	NSMutableSet* _dirtyProperties;

}

@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,retain) NSURL * objectID; 
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                         //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isPersistent;
-(id)_encodeProtobuf;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(BOOL)isDirty;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(id)_encodeProtobufData;
-(void)markAllPropertiesDirty;
-(id)fullDescription;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSURL *)objectID;
-(void)setObjectID:(NSURL *)arg1 ;
-(id)initWithManagedCredentialItem:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(NSString *)description;
-(id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)serviceName;
-(id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

