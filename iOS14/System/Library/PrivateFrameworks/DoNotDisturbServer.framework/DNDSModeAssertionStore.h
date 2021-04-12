/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)lastUpdateDate;
-(id)dictionaryRepresentation;
-(NSArray *)assertions;
-(NSArray *)invalidations;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)syncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 ;
-(id)_initWithStore:(id)arg1 ;
-(id)sysdiagnoseDictionaryRepresentation;
-(unsigned long long)hash;
-(id)peaceSyncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 userRequestedClientIdentifierHandler:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)invalidationRequests;
-(BOOL)isEqual:(id)arg1 ;
@end

