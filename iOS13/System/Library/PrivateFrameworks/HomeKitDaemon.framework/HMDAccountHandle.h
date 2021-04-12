/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)accountHandleForDestination:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)value;
-(CNContact *)contact;
-(NSUUID *)modelIdentifier;
-(id)shortDescription;
-(BOOL)isLocal;
-(id)initWithURI:(id)arg1 ;
-(IDSURI *)URI;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(Class)modelClass;
-(id)initWithObjectModel:(id)arg1 ;
-(BOOL)isBackingStorageEqual:(id)arg1 ;
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

