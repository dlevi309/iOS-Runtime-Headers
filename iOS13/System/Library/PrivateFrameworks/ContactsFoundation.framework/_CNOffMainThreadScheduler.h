/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface _CNOffMainThreadScheduler : NSObject <CNScheduler> {

	id<CNScheduler> _alreadyOffMainThreadScheduler;
	id<CNScheduler> _needToGetOffMainThreadScheduler;

}

@property (nonatomic,readonly) id<CNScheduler> alreadyOffMainThreadScheduler;                //@synthesize alreadyOffMainThreadScheduler=_alreadyOffMainThreadScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> needToGetOffMainThreadScheduler;              //@synthesize needToGetOffMainThreadScheduler=_needToGetOffMainThreadScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(id)os_log;
-(id)init;
-(NSString *)description;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithBackgroundScheduler:(id)arg1 ;
-(id<CNScheduler>)alreadyOffMainThreadScheduler;
-(id<CNScheduler>)needToGetOffMainThreadScheduler;
@end

