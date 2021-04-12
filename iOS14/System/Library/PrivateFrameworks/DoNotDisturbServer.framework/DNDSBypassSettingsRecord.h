/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSNumber* _immediateBypassEventSourceType;
	NSString* _immediateBypassCNGroupIdentifier;
	NSNumber* _repeatEventSourceBehaviorEnabledSetting;

}

@property (nonatomic,copy,readonly) NSNumber * immediateBypassEventSourceType;                       //@synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * immediateBypassCNGroupIdentifier;                     //@synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * repeatEventSourceBehaviorEnabledSetting;              //@synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2 ;
+(id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSNumber *)immediateBypassEventSourceType;
-(NSString *)immediateBypassCNGroupIdentifier;
-(NSNumber *)repeatEventSourceBehaviorEnabledSetting;
-(id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3 ;
-(unsigned long long)legacyPrivilegedSenderType;
@end

