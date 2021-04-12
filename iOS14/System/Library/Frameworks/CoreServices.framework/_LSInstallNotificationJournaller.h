/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding> {

	BOOL _preliminary;
	NSString* _primaryBundleID;
	NSMutableArray* _journalledNotifications;
	unsigned long long _operationType;
	double _timestamp;

}
+(BOOL)supportsSecureCoding;
+(void)createInstallJournalDirectoryIfRequired;
+(BOOL)shouldJournalNotificationType:(int)arg1 ;
-(id)journalURL;
-(BOOL)entityExists;
-(void)removeJournalFile;
-(void)writeFinalJournal;
-(id)primaryBundleID;
-(unsigned long long)installOperation;
-(void)setPrimaryBundleID:(id)arg1 ;
-(BOOL)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(BOOL)arg2 ;
-(id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned long long)arg2 ;
-(BOOL)applicableForCurrentDatabase;
-(void)_writeJournalUnconditionally;
-(id)journalledNotifications;
-(void)writePreliminaryJournal;
-(void)removeJournalAfterNotificationFence;
-(BOOL)shouldExpectEntityToExist;
-(id)synthesizedPreliminaryJournalledNotifications;
-(double)timestamp;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
@end

