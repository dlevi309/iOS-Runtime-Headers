/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString, NSURL, NSDictionary;

@interface CLSCollaborationState : CLSObject <CLSRelationable> {

	NSString* _parentEntityName;
	NSString* _ownerPersonID;
	long long _domain;
	long long _domainVersion;
	long long _state;
	unsigned long long _flags;
	NSString* _note;
	NSString* _classID;
	NSURL* _assetURL;
	NSDictionary* _info;
	NSString* _senderPersonID;
	NSString* _recipientPersonID;
	NSString* _serverETag;
	NSString* _serverExecutionID;
	long long _serverStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ownerPersonID;                  //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (assign,nonatomic) long long domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long domainVersion;                 //@synthesize domainVersion=_domainVersion - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * classID;                        //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy) NSString * note;                           //@synthesize note=_note - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                          //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                       //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSString * parentEntityName;               //@synthesize parentEntityName=_parentEntityName - In the implementation block
@property (nonatomic,copy) NSString * senderPersonID;                 //@synthesize senderPersonID=_senderPersonID - In the implementation block
@property (nonatomic,copy) NSString * recipientPersonID;              //@synthesize recipientPersonID=_recipientPersonID - In the implementation block
@property (nonatomic,copy) NSString * serverETag;                     //@synthesize serverETag=_serverETag - In the implementation block
@property (nonatomic,copy) NSString * serverExecutionID;              //@synthesize serverExecutionID=_serverExecutionID - In the implementation block
@property (assign,nonatomic) long long serverStatus;                  //@synthesize serverStatus=_serverStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)identifierForTargetObjectID:(id)arg1 ownerPersonID:(id)arg2 domain:(long long)arg3 ;
+(id)supportedInfoDictionaryClasses;
-(id)dictionaryRepresentation;
-(NSDictionary *)info;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(unsigned long long)flags;
-(NSURL *)assetURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(long long)domain;
-(NSString *)description;
-(NSString *)classID;
-(NSString *)note;
-(long long)domainVersion;
-(void)setDomainVersion:(long long)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)hasServerMetadata;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)_init;
-(NSString *)ownerPersonID;
-(void)mergeWithObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initForObjectWithID:(id)arg1 targetClass:(Class)arg2 ownerPersonID:(id)arg3 domain:(long long)arg4 state:(long long)arg5 flags:(unsigned long long)arg6 ;
-(void)setClassID:(NSString *)arg1 ;
-(void)setSenderPersonID:(NSString *)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(NSString *)recipientPersonID;
-(void)setRecipientPersonID:(NSString *)arg1 ;
-(NSString *)senderPersonID;
-(NSString *)parentEntityName;
-(void)setParentEntityName:(NSString *)arg1 ;
-(NSString *)serverETag;
-(void)setServerETag:(NSString *)arg1 ;
-(long long)serverStatus;
-(void)setServerStatus:(long long)arg1 ;
-(NSString *)serverExecutionID;
-(void)setServerExecutionID:(NSString *)arg1 ;
-(id)friendlyDomainRepresentation;
-(id)friendlyStateRepresentation;
-(id)friendlyFlagsRepresentation;
-(id)initForObject:(id)arg1 ownerPersonID:(id)arg2 domain:(long long)arg3 state:(long long)arg4 flags:(unsigned long long)arg5 ;
@end

