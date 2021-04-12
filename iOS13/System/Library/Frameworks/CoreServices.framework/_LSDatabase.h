/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class FSNode, NSObject, NSMutableSet, NSDate, NSUUID, NSString;

@interface _LSDatabase : NSObject {

	FSNode* node;
	unsigned uid;
	NSObject*<OS_dispatch_queue> accessQueue;
	BOOL needsUpdate;
	BOOL isForcedForXCTesting;
	NSMutableSet* changedBundleIDs;
	NSMutableSet* changedTypeIDs;
	CSStoreRef store;
	LSSchema* schema;

}

@property (nonatomic,readonly) NSDate * dateInitialized; 
@property (nonatomic,readonly) FSNode * node; 
@property (nonatomic,readonly) unsigned userID; 
@property (nonatomic,readonly) CSStoreRef store; 
@property (nonatomic,readonly) LSSchema* schema; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) NSUUID * cacheGUID; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
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
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned)userID;
-(id)_init;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(BOOL)isSeedingComplete;
-(NSUUID *)cacheGUID;
-(unsigned long long)sequenceNumber;
-(BOOL)isSeeded;
-(void)setSeeded:(BOOL)arg1 ;
-(void)setSeedingComplete:(BOOL)arg1 ;
-(NSDate *)dateInitialized;
-(LSSchema*)schema;
-(NSString *)seededSystemVersion;
-(NSString *)seededModelCode;
-(BOOL)arePrefsLoaded;
-(void)setPrefsLoaded:(BOOL)arg1 ;
-(BOOL)applicationsChanged;
-(void)setApplicationsChanged:(BOOL)arg1 ;
-(BOOL)documentTypesChanged;
-(void)setDocumentTypesChanged:(BOOL)arg1 ;
-(BOOL)URLTypesChanged;
-(void)setURLTypesChanged:(BOOL)arg1 ;
-(BOOL)typeDeclarationsChanged;
-(void)setTypeDeclarationsChanged:(BOOL)arg1 ;
-(void)applicationDidChange:(unsigned)arg1 ;
-(void)claimDidChange:(unsigned)arg1 ;
-(CSStoreRef)store;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)registerCanonicalNamesFromStringLocalizer:(id)arg1 ;
-(void)registerCanonicalNames;
-(FSNode *)node;
@end

