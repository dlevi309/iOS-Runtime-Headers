/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContainer.h>

@class NSString, NSData, NSDate;

@interface CNMutableContainer : CNContainer

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalSyncTag; 
@property (nonatomic,copy) NSData * externalSyncData; 
@property (nonatomic,copy) NSString * constraintsPath; 
@property (nonatomic,copy) NSString * meIdentifier; 
@property (assign,nonatomic) unsigned long long restrictions; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
-(NSString *)name;
-(id)copy;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)freeze;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSDate *)lastSyncDate;
-(NSString *)accountIdentifier;
-(unsigned long long)restrictions;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(void)setSnapshot:(id)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)externalSyncTag;
-(void)setExternalSyncTag:(NSString *)arg1 ;
-(NSData *)externalSyncData;
-(void)setExternalSyncData:(NSData *)arg1 ;
-(NSString *)constraintsPath;
-(void)setConstraintsPath:(NSString *)arg1 ;
-(NSString *)meIdentifier;
-(void)setMeIdentifier:(NSString *)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnapshot:(id)arg1 ;
-(void)setParentallyManaged:(BOOL)arg1 ;
-(void)setGuardianRestricted:(BOOL)arg1 shouldPushChangeToServer:(BOOL)arg2 ;
@end

