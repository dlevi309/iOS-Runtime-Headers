/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
*/


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
@end

