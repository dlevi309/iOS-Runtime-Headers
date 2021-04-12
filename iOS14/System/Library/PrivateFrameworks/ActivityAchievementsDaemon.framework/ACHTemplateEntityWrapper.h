/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(void)setSyncedTemplatesObserver:(id<ACHTemplateEntitySyncedTemplatesObserver>)arg1 ;
-(id)allTemplatesWithError:(id*)arg1 ;
-(BOOL)removeTemplates:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2 ;
-(id<ACHTemplateEntitySyncedTemplatesObserver>)syncedTemplatesObserver;
@end

