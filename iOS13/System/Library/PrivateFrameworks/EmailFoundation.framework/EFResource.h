/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface EFResource : NSObject <NSLocking> {

	os_unfair_lock_s _unfair_lock;
	Aq _lockCount;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)holdResource;
-(BOOL)returnResource;
@end

