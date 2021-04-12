/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSNumber;

@interface ISDefaults : NSObject {

	os_unfair_lock_s _lock;
	NSNumber* __usePerstentCache;

}

@property (retain) NSNumber * _usePerstentCache;              //@synthesize _usePerstentCache=__usePerstentCache - In the implementation block
@property (readonly) os_unfair_lock_s lock;                   //@synthesize lock=_lock - In the implementation block
@property (readonly) BOOL usePerstentCache; 
+(id)sharedInstance;
-(os_unfair_lock_s)lock;
-(BOOL)usePerstentCache;
-(NSNumber *)_usePerstentCache;
-(void)set_usePerstentCache:(NSNumber *)arg1 ;
@end

