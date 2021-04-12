/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKPersistentObject.h>

@class EKFrozenReminderSource, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	EKFrozenReminderSource* _reminderSource;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (assign,nonatomic) int preferredEventPrivateValue; 
@property (assign,nonatomic) int strictestEventPrivateValue; 
@property (nonatomic,retain) NSString * UUID; 
@property (retain) EKFrozenReminderSource * reminderSource;                 //@synthesize reminderSource=_reminderSource - In the implementation block
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(id)description;
-(int)flags;
-(id)constraints;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setFlags:(int)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setCreatorBundleID:(id)arg1 ;
-(id)creatorBundleID;
-(int)entityType;
-(id)lastSyncEndDate;
-(int)preferredEventPrivateValue;
-(unsigned long long)lastSyncError;
-(EKFrozenReminderSource *)reminderSource;
-(id)delegatedAccountOwnerStoreID;
-(id)lastSyncStartDate;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setLastSyncStartDate:(id)arg1 ;
-(void)setLastSyncEndDate:(id)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(int)strictestEventPrivateValue;
-(void)setReminderSource:(EKFrozenReminderSource *)arg1 ;
-(void)setPreferredEventPrivateValue:(int)arg1 ;
-(void)setStrictestEventPrivateValue:(int)arg1 ;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(id)constraintsDescriptionPath;
-(void)setConstraintsDescriptionPath:(id)arg1 ;
-(id)creatorCodeSigningIdentity;
-(void)setCreatorCodeSigningIdentity:(id)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)showsNotifications;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(void)setDelegatedAccountOwnerStoreID:(id)arg1 ;
@end

