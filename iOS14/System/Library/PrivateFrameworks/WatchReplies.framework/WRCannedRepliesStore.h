/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
*/


@protocol OS_os_log;
@class WRReplyStoreInfo, NSString, NSArray, NPSDomainAccessor, NSObject, NPSManager;

@interface WRCannedRepliesStore : NSObject {

	unsigned long long _category;
	WRReplyStoreInfo* _info;
	NSString* _cachedLanguage;
	NSArray* _cachedLocalizedReplies;
	NSArray* _cannedReplies;
	BOOL _didLocalizeDefaultReplies;
	BOOL _didMigrationCheck;
	NPSDomainAccessor* _domainAccessor;
	NSObject*<OS_os_log> _log;
	NPSManager* _npsManager;

}
+(BOOL)isTinker;
+(id)supportedLanguages;
+(BOOL)supportsEnhancedEditing;
-(id)domainAccessor;
-(id)npsManager;
-(id)init;
-(id)cannedReplies;
-(id)initWithCategory:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)includeSmartReplies;
-(void)setIncludeSmartReplies:(BOOL)arg1 ;
-(void)setCannedReplies:(id)arg1 ;
-(void)invalidateCachesIfNeededForLanguage:(id)arg1 ;
-(void)loadCannedRepliesIfNeeded;
-(BOOL)usesFormalReplies;
-(id)localizedDefaultReply:(id)arg1 ;
-(id)localizedFormalDefaultReply:(id)arg1 ;
-(void)localizeDefaultRepliesIfNeeded;
-(void)saveReplies:(id)arg1 ;
-(BOOL)supportsSmartReplies;
-(id)migrateRepliesIfNeeded:(id)arg1 ;
-(id)repliesForLanguage:(id)arg1 ;
-(void)handleStoreChange;
@end

