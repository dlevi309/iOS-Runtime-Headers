/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFileLock.h>

@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {

	int _fileDescriptor;

}
-(void)dealloc;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)releaseLock;
@end

