/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDRemoteAddressable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, IDSURI, NSString, CNContact, CKUserIdentityLookupInfo;

@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, NSCopying, NSSecureCoding> {

	BOOL _local;
	BOOL _locallyTracked;
	NSUUID* _modelIdentifier;
	NSUUID* _modelParentIdentifier;
	NSUUID* _identifier;
	IDSURI* _URI;

}

@property (copy,readonly) IDSURI * URI;                                               //@synthesize URI=_URI - In the implementation block
@property (nonatomic,copy) NSUUID * modelParentIdentifier;                            //@synthesize modelParentIdentifier=_modelParentIdentifier - In the implementation block
@property (getter=isLocallyTracked) BOOL locallyTracked;                              //@synthesize locallyTracked=_locallyTracked - In the implementation block
@property (readonly) long long type; 
@property (copy,readonly) NSString * value; 
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLocal,readonly) BOOL local;                                       //@synthesize local=_local - In the implementation block
@property (copy,readonly) CNContact * contact; 
@property (copy,readonly) CKUserIdentityLookupInfo * cloudKitLookupInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier;                         //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)accountHandleForDestination:(id)arg1 ;
-(BOOL)isLocal;
-(CNContact *)contact;
-(id)init;
-(IDSURI *)URI;
-(BOOL)isBackingStorageEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(long long)type;
-(unsigned long long)hash;
-(Class)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(NSUUID *)identifier;
-(id)initWithURI:(id)arg1 ;
-(id)initWithObjectModel:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithURI:(id)arg1 local:(BOOL)arg2 ;
-(id)remoteDestinationString;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(void)setModelParentIdentifier:(NSUUID *)arg1 ;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)isLocallyTracked;
-(void)setLocallyTracked:(BOOL)arg1 ;
-(CKUserIdentityLookupInfo *)cloudKitLookupInfo;
@end

