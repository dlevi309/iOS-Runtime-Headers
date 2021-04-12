/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSDate;

@interface _ATXAppDailyDoseCurrentStore : NSObject {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _queue;
	Ai _fd;
	NSMutableDictionary* _cache;
	NSDate* _expires;

}
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)_overwrite;
-(void)closePermanently;
-(void)_openFd;
-(void)_readCacheAndExpiration;
-(id)_getCacheFromFile;
-(BOOL)isExpiredAt:(id)arg1 ;
-(BOOL)isExpiredNow;
-(void)resetWithDurationMap:(id)arg1 on:(id)arg2 ;
-(double)currentDoseFor:(id)arg1 ;
-(void)increaseDoseFor:(id)arg1 by:(double)arg2 ;
@end

