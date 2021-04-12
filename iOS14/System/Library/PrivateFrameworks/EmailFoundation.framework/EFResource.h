/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface EFResource : NSObject <NSLocking> {

	os_unfair_lock_s _unfair_lock;
	Aq _lockCount;

}
-(void)unlock;
-(id)init;
-(void)lock;
-(void)holdResource;
-(BOOL)returnResource;
@end

