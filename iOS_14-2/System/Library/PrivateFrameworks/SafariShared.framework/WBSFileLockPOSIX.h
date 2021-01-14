/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSFileLock.h>

@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {

	int _fileDescriptor;

}
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)releaseLock;
-(void)dealloc;
@end

