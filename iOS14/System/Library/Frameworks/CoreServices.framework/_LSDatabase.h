/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class FSNode, NSObject, NSDate, NSUUID, NSString;

@interface _LSDatabase : NSObject {

	CSStoreRef store;
	LSSchema* schema;
	FSNode* node;
	unsigned uid;
	NSObject*<OS_dispatch_queue> accessQueue;
	unsigned needsUpdate : 1;
	unsigned isForcedForXCTesting : 1;
	unsigned isForcedForRemoteUpdates : 1;

}

@property (nonatomic,readonly) NSDate * dateInitialized; 
@property (nonatomic,readonly) FSNode * node; 
@property (nonatomic,readonly) unsigned userID; 
@property (nonatomic,readonly) CSStoreRef store; 
@property (nonatomic,readonly) LSSchema* schema; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) NSUUID * cacheGUID; 
@property (assign,getter=isSeeded,nonatomic) BOOL seeded; 
@property (assign,getter=isSeedingComplete,nonatomic) BOOL seedingComplete; 
@property (nonatomic,readonly) NSString * seededSystemVersion; 
@property (nonatomic,readonly) NSString * seededModelCode; 
@property (assign,getter=arePrefsLoaded,nonatomic) BOOL prefsLoaded; 
@property (assign,nonatomic) BOOL applicationsChanged; 
@property (assign,nonatomic) BOOL documentTypesChanged; 
@property (assign,nonatomic) BOOL URLTypesChanged; 
@property (assign,nonatomic) BOOL typeDeclarationsChanged; 
+(void)setSeedingInProgress:(BOOL)arg1 ;
+(id)headerTableName;
+(unsigned)sessionStatus;
-(LSSchema*)schema;
-(BOOL)URLTypesChanged;
-(void)applicationWillBeUninstalled:(unsigned)arg1 ;
-(unsigned)userID;
-(id)init;
-(BOOL)isSeedingComplete;
-(CSStoreRef)store;
-(FSNode *)node;
-(void)setPrefsLoaded:(BOOL)arg1 ;
-(void)applicationWasInstalled:(unsigned)arg1 ;
-(BOOL)arePrefsLoaded;
-(BOOL)applicationsChanged;
-(NSString *)seededSystemVersion;
-(BOOL)isSeeded;
-(void)setApplicationsChanged:(BOOL)arg1 ;
-(id)description;
-(NSDate *)dateInitialized;
-(NSUUID *)cacheGUID;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSString *)seededModelCode;
-(void)claimDidChange:(unsigned)arg1 ;
-(void)getCacheGUIDBytes:(unsigned char)arg1 ;
-(void)setSeedingComplete:(BOOL)arg1 ;
-(id)_init;
-(void)setDocumentTypesChanged:(BOOL)arg1 ;
-(BOOL)typeDeclarationsChanged;
-(void)registerCanonicalNamesFromStringLocalizer:(id)arg1 ;
-(void)setTypeDeclarationsChanged:(BOOL)arg1 ;
-(void)setURLTypesChanged:(BOOL)arg1 ;
-(BOOL)documentTypesChanged;
-(void)registerCanonicalNames;
-(void)dealloc;
-(void)setSeeded:(BOOL)arg1 ;
@end

