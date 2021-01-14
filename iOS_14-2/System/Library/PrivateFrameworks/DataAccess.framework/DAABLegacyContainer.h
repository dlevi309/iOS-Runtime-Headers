/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <libobjc.A.dylib/DAContainer.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer> {

	void* _source;

}

@property (nonatomic,readonly) void* source;                                                   //@synthesize source=_source - In the implementation block
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLocal;
-(void)setExternalIdentifier:(id)arg1 ;
-(BOOL)isContact;
-(BOOL)isContainer;
-(id)cTag;
-(BOOL)isGroup;
-(void)updateSaveRequest:(id)arg1 ;
-(id)syncTag;
-(id)accountIdentifier;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(void)setType:(long long)arg1 ;
-(id)name;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setSyncData:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(long long)type;
-(void)setSyncTag:(id)arg1 ;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1 ;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1 ;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1 ;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(id)asContainer;
-(id)initWithABSource:(void*)arg1 ;
-(id)syncData;
-(void)setName:(id)arg1 ;
-(id)identifier;
-(void)markForDeletion;
-(void)setCTag:(id)arg1 ;
-(void*)asSource;
-(void)dealloc;
-(void*)source;
@end

