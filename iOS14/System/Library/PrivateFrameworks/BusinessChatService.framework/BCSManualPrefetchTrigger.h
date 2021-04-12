/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSPrefetchTrigger.h>

@class NSString;

@interface BCSManualPrefetchTrigger : NSObject <BCSPrefetchTrigger> {

	/*^block*/id _prefetchBlock;

}

@property (nonatomic,copy) id prefetchBlock;                        //@synthesize prefetchBlock=_prefetchBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)schedulePrefetchBlock:(/*^block*/id)arg1 ;
-(void)triggerPrefetchWithCompletion:(/*^block*/id)arg1 ;
-(void)setPrefetchBlock:(id)arg1 ;
-(id)prefetchBlock;
@end

