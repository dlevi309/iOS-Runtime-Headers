/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol DAContainer <DACardDAVRecord>
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@required
-(BOOL)isLocal;
-(void)setExternalIdentifier:(id)arg1;
-(id)cTag;
-(id)syncTag;
-(id)accountIdentifier;
-(id)externalIdentifier;
-(void)setType:(long long)arg1;
-(id)name;
-(void)setGuardianRestricted:(BOOL)arg1;
-(BOOL)isGuardianRestricted;
-(void)setSyncData:(id)arg1;
-(void)setAccountIdentifier:(id)arg1;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1;
-(long long)type;
-(void)setSyncTag:(id)arg1;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(id)asContainer;
-(id)syncData;
-(void)setName:(id)arg1;
-(id)identifier;
-(void)setCTag:(id)arg1;
-(void*)asSource;

@end

