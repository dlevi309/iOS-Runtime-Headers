/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(id)constraintsName;
-(int)entityType;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setCreatorCodeSigningIdentity:(id)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(id)lastSyncStartDate;
-(void)setCreatorBundleID:(id)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setLastSyncErrorData:(id)arg1 ;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(void)setFlags2:(int)arg1 ;
-(id)lastSyncEndDate;
-(void)setLastSyncStartDate:(id)arg1 ;
-(id)delegatedAccountOwnerStoreID;
-(id)lastSyncErrorData;
-(id)constraints;
-(unsigned long long)lastSyncError;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)showsNotifications;
-(id)creatorBundleID;
-(int)flags2;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)sourceType;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(NSString *)UUID;
-(void)setExternalID:(NSString *)arg1 ;
-(int)flags;
-(NSString *)externalID;
-(NSString *)externalModificationTag;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(void)setLastSyncEndDate:(id)arg1 ;
-(EKFrozenReminderSource *)reminderSource;
-(void)setConstraintsName:(id)arg1 ;
-(id)description;
-(void)setReminderSource:(EKFrozenReminderSource *)arg1 ;
-(id)creatorCodeSigningIdentity;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(int)preferredEventPrivateValueRaw;
-(void)setFlags:(int)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(void)setDelegatedAccountOwnerStoreID:(id)arg1 ;
-(NSString *)title;
@end

