/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
+(BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
+(BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(BOOL)TCCSupportedForAccountTypeID:(id)arg1 ;
@end

