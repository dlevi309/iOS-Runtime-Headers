/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/SFSafariPasswordCredential.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, SFCredentialProviderExtensionState;

@interface SFPasswordCredentialIdentity : NSObject <SFSafariPasswordCredential, NSSecureCoding, NSCopying> {

	NSString* _domainWithoutWWWDot;
	long long _rowIdentifier;
	long long _serviceIdentifierType;
	NSString* _serviceIdentifier;
	NSString* _externalRecordIdentifier;
	NSString* _user;
	long long _rank;
	SFCredentialProviderExtensionState* _owningExtensionState;

}

@property (assign,nonatomic) long long rowIdentifier;                                                //@synthesize rowIdentifier=_rowIdentifier - In the implementation block
@property (nonatomic,retain) SFCredentialProviderExtensionState * owningExtensionState;              //@synthesize owningExtensionState=_owningExtensionState - In the implementation block
@property (nonatomic,readonly) long long serviceIdentifierType;                                      //@synthesize serviceIdentifierType=_serviceIdentifierType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceIdentifier;                                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalRecordIdentifier;                             //@synthesize externalRecordIdentifier=_externalRecordIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                                                 //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) long long rank;                                                       //@synthesize rank=_rank - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * site; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSDate *)creationDate;
-(long long)rank;
-(BOOL)isExternal;
-(NSString *)serviceIdentifier;
-(NSString *)site;
-(void)setRowIdentifier:(long long)arg1 ;
-(long long)rowIdentifier;
-(SFCredentialProviderExtensionState *)owningExtensionState;
-(void)setOwningExtensionState:(SFCredentialProviderExtensionState *)arg1 ;
-(long long)compareForQuickTypeBar:(id)arg1 ;
-(long long)serviceIdentifierType;
-(NSString *)externalRecordIdentifier;
-(id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6 ;
-(id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6 owningExtensionState:(id)arg7 ;
-(id)_domainWithoutWWWDot;
-(id)initWithServiceIdentifier:(id)arg1 serviceIdentifierType:(long long)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(long long)arg5 ;
@end

