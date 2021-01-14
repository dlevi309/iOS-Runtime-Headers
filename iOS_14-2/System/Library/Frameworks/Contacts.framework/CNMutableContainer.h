/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContainer.h>

@class CNContainer, NSString, NSData, NSDate;

@interface CNMutableContainer : CNContainer

@property (nonatomic,copy) CNContainer * snapshot; 
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
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNContainer *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setGuardianRestricted:(BOOL)arg1 shouldPushChangeToServer:(BOOL)arg2 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)externalModificationTag;
-(NSString *)externalIdentifier;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)copy;
-(NSString *)constraintsPath;
-(NSData *)externalSyncData;
-(NSString *)externalSyncTag;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(void)setExternalSyncTag:(NSString *)arg1 ;
-(void)setExternalSyncData:(NSData *)arg1 ;
-(void)setConstraintsPath:(NSString *)arg1 ;
-(NSString *)meIdentifier;
-(void)setMeIdentifier:(NSString *)arg1 ;
-(unsigned long long)restrictions;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(NSDate *)lastSyncDate;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
@end

