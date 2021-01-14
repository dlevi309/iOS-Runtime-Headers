/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/NSLocking.h>

@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject <NSLocking> {

	CPExclusiveLock* _underlyingLock;

}
+(void)writeMigrationVersionPref;
+(BOOL)isMigrationFinished;
+(void)signalMigrationFinished;
+(id)_currentSystemVersion;
-(void)unlock;
-(id)init;
-(void)lock;
@end

