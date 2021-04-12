/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEProcessInfo : NSObject
+(void)initGlobals;
+(id)copyUUIDForSingleArch:(int)arg1 ;
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(id)copyUUIDsForExecutable:(id)arg1 ;
+(id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned)arg2 ;
+(void)clearUUIDCache;
+(id)getApplicationNameFromPlugin:(id)arg1 userUID:(unsigned)arg2 ;
+(id)copyDNSUUIDs;
+(id)copyNEHelperUUIDs;
+(BOOL)is64bitCapable;
-(id)init;
@end

