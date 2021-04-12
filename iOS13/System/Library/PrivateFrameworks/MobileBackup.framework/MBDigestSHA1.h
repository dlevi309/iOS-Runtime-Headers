/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(id)init;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
@end

