/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
*/


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end

