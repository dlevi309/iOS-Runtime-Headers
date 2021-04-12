/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSSyncUserDefaults : NSObject
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)_isBundleIdentifierInArray:(CFArrayRef)arg1 ;
+(BOOL)isSignedIntoICloud;
+(BOOL)isCloudKitSyncOptedIn;
+(id)iCloudIdentity;
+(BOOL)_isServiceEnabledAlternative:(CFStringRef)arg1 ;
+(BOOL)_isServiceDisabledAlternative:(CFStringRef)arg1 ;
+(void)_setService:(CFStringRef)arg1 enabled:(BOOL)arg2 ;
@end

