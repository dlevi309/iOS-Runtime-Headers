/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)serviceName;
-(NSURL *)objectID;
-(NSString *)accountIdentifier;
-(void)setServiceName:(NSString *)arg1 ;
-(id)fullDescription;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setObjectID:(NSURL *)arg1 ;
-(BOOL)isDirty;
-(ACAccountStore *)accountStore;
-(void)clearDirtyProperties;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(id)_encodeProtobuf;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)markAllPropertiesDirty;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)isPersistent;
-(id)initWithManagedCredentialItem:(id)arg1 ;
-(id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2 ;
-(id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(BOOL)isExpired;
-(void)setPersistent:(BOOL)arg1 ;
@end

