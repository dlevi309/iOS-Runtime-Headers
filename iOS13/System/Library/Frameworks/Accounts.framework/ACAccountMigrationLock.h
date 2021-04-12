/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/NSLocking.h>

@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject <NSLocking> {

	CPExclusiveLock* _underlyingLock;

}
+(id)_currentSystemVersion;
+(void)writeMigrationVersionPref;
+(BOOL)isMigrationFinished;
+(void)signalMigrationFinished;
-(id)init;
-(void)lock;
-(void)unlock;
@end

