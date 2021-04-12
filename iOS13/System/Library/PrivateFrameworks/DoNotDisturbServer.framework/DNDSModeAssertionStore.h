/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {

	NSArray* _assertions;
	NSArray* _invalidations;
	NSArray* _invalidationRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidations;                     //@synthesize invalidations=_invalidations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidationRequests;              //@synthesize invalidationRequests=_invalidationRequests - In the implementation block
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)newWithSyncDictionaryRepresentation:(id)arg1 ;
+(id)messageDateForSyncDictionaryRepresentation:(id)arg1 ;
+(id)upgradeDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithPeaceSyncDictionaryRepresentation:(id)arg1 ;
+(id)messageDateForPeaceSyncDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)assertions;
-(id)lastUpdateDate;
-(NSArray *)invalidations;
-(id)_initWithStore:(id)arg1 ;
-(id)syncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 ;
-(NSArray *)invalidationRequests;
-(id)sysdiagnoseDictionaryRepresentation;
-(id)peaceSyncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 userRequestedClientIdentifierHandler:(/*^block*/id)arg3 ;
@end

