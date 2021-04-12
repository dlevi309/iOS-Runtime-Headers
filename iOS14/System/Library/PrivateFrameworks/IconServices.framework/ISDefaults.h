/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)set_usePerstentCache:(NSNumber *)arg1 ;
-(NSNumber *)_usePerstentCache;
-(os_unfair_lock_s)lock;
-(BOOL)usePerstentCache;
@end

