/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSSyncUserDefaults : NSObject
+(id)iCloudIdentity;
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)_isBundleIdentifierInArray:(CFArrayRef)arg1 ;
+(BOOL)isSignedIntoICloud;
+(BOOL)isCloudKitSyncOptedIn;
+(BOOL)_isServiceEnabledAlternative:(CFStringRef)arg1 ;
+(BOOL)_isServiceDisabledAlternative:(CFStringRef)arg1 ;
+(void)_setService:(CFStringRef)arg1 enabled:(BOOL)arg2 ;
@end

