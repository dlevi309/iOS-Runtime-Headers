/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol DAContainer <DACardDAVRecord>
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@required
-(id)name;
-(long long)type;
-(void)setType:(long long)arg1;
-(void)setName:(id)arg1;
-(id)identifier;
-(id)accountIdentifier;
-(void)setAccountIdentifier:(id)arg1;
-(BOOL)isLocal;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1;
-(void)setSyncData:(id)arg1;
-(id)syncData;
-(id)cTag;
-(void)setCTag:(id)arg1;
-(id)syncTag;
-(void)setSyncTag:(id)arg1;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(void*)asSource;
-(id)asContainer;

@end

