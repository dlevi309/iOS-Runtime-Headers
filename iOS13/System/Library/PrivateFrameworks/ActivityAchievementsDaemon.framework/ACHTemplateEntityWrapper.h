/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHTemplateEntitySyncedTemplatesObserver.h>

@protocol ACHTemplateEntitySyncedTemplatesObserver;
@class HDProfile, NSString;

@interface ACHTemplateEntityWrapper : NSObject <ACHTemplateEntitySyncedTemplatesObserver> {

	HDProfile* _profile;
	id<ACHTemplateEntitySyncedTemplatesObserver> _syncedTemplatesObserver;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                               //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;              //@synthesize syncedTemplatesObserver=_syncedTemplatesObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setSyncedTemplatesObserver:(id<ACHTemplateEntitySyncedTemplatesObserver>)arg1 ;
-(id)allTemplatesWithError:(id*)arg1 ;
-(BOOL)removeTemplates:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2 ;
-(id<ACHTemplateEntitySyncedTemplatesObserver>)syncedTemplatesObserver;
@end

