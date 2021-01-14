/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWObjectLifetimeTracker : NSObject {

	/*^block*/id _deallocHandler;

}
+(id)trackerWithDeallocHandler:(/*^block*/id)arg1 ;
+(void)trackAttachmentBearer:(void*)arg1 deallocHandler:(/*^block*/id)arg2 ;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

