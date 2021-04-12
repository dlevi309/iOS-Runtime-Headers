/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <libobjc.A.dylib/DAContainer.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer> {

	void* _source;

}

@property (nonatomic,readonly) void* source;                                                   //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
-(void)dealloc;
-(id)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)identifier;
-(void*)source;
-(id)accountIdentifier;
-(void)setAccountIdentifier:(id)arg1 ;
-(BOOL)isGroup;
-(BOOL)isLocal;
-(BOOL)isContact;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(BOOL)isContainer;
-(void)setSyncData:(id)arg1 ;
-(id)syncData;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)cTag;
-(void)setCTag:(id)arg1 ;
-(id)syncTag;
-(void)setSyncTag:(id)arg1 ;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1 ;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1 ;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1 ;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(void*)asSource;
-(id)asContainer;
-(id)initWithABSource:(void*)arg1 ;
@end

