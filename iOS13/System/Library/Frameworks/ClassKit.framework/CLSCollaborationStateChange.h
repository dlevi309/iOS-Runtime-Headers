/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>

@class NSString, NSMutableSet, NSMutableArray, NSSet, NSArray;

@interface CLSCollaborationStateChange : CLSObject {

	NSString* _ownerPersonID;
	NSString* _targetObjectID;
	NSString* _targetEntityName;
	NSString* _targetClassID;
	NSString* _senderPersonID;
	NSString* _recipientPersonID;
	NSMutableSet* _changedDomains;
	NSMutableArray* _states;
	NSSet* _deletedDomains;

}

@property (nonatomic,copy) NSString * targetObjectID;                 //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (nonatomic,copy) NSString * targetEntityName;               //@synthesize targetEntityName=_targetEntityName - In the implementation block
@property (nonatomic,copy) NSString * ownerPersonID;                  //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,copy) NSString * senderPersonID;                 //@synthesize senderPersonID=_senderPersonID - In the implementation block
@property (nonatomic,copy) NSString * targetClassID;                  //@synthesize targetClassID=_targetClassID - In the implementation block
@property (nonatomic,copy) NSSet * changedDomains;                    //@synthesize changedDomains=_changedDomains - In the implementation block
@property (nonatomic,copy) NSSet * deletedDomains;                    //@synthesize deletedDomains=_deletedDomains - In the implementation block
@property (nonatomic,copy) NSArray * states;                          //@synthesize states=_states - In the implementation block
@property (nonatomic,copy) NSString * recipientPersonID;              //@synthesize recipientPersonID=_recipientPersonID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(BOOL)hasChanges;
-(NSArray *)states;
-(void)setStates:(NSArray *)arg1 ;
-(NSString *)ownerPersonID;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)targetObjectID;
-(id)stateForDomain:(long long)arg1 ;
-(BOOL)addValidStates:(id)arg1 ;
-(NSString *)targetClassID;
-(id)initWithObject:(id)arg1 ownerPersonID:(id)arg2 targetClassID:(id)arg3 recipientPersonID:(id)arg4 ;
-(void)setSenderPersonID:(NSString *)arg1 ;
-(BOOL)addStates:(id)arg1 ;
-(BOOL)addStateForDomain:(long long)arg1 domainVersion:(long long)arg2 state:(long long)arg3 flags:(unsigned long long)arg4 note:(id)arg5 assetURL:(id)arg6 ;
-(void)removeStateForDomain:(long long)arg1 ;
-(BOOL)setDomainVersion:(long long)arg1 forDomain:(long long)arg2 ;
-(BOOL)setState:(long long)arg1 forDomain:(long long)arg2 ;
-(BOOL)setFlags:(unsigned long long)arg1 forDomain:(long long)arg2 ;
-(BOOL)setClassID:(id)arg1 forDomain:(long long)arg2 ;
-(BOOL)setNote:(id)arg1 forDomain:(long long)arg2 ;
-(BOOL)setAssetURL:(id)arg1 forDomain:(long long)arg2 ;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(NSString *)targetEntityName;
-(void)setTargetEntityName:(NSString *)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)setTargetClassID:(NSString *)arg1 ;
-(NSString *)recipientPersonID;
-(void)setRecipientPersonID:(NSString *)arg1 ;
-(NSSet *)changedDomains;
-(void)setChangedDomains:(NSSet *)arg1 ;
-(NSString *)senderPersonID;
-(NSSet *)deletedDomains;
-(void)setDeletedDomains:(NSSet *)arg1 ;
@end

