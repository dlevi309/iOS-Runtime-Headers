/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@class NSString;

@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	unsigned long long _dataWritingFileProtection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(unsigned long long)_dataWritingOptionForFileProtectionType:(id)arg1 ;
-(id)initWithFileProtectionType:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)dataAtPath:(id)arg1 ;
@end

