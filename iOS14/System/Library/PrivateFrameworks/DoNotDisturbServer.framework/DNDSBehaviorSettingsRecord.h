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

@interface DNDSBehaviorSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSNumber* _interruptionBehaviorSetting;

}

@property (nonatomic,copy,readonly) NSNumber * interruptionBehaviorSetting;              //@synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSNumber *)interruptionBehaviorSetting;
-(id)_initWithInterruptionBehaviorSetting:(id)arg1 ;
@end

