/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEProcessInfo : NSObject
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(void)clearUUIDCache;
+(id)copyNEHelperUUIDs;
+(id)copyDNSUUIDs;
+(id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned)arg2 ;
+(id)copyUUIDForSingleArch:(int)arg1 ;
+(BOOL)is64bitCapable;
+(id)copyUUIDsForExecutable:(id)arg1 ;
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(void)initGlobals;
-(id)init;
@end

