/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSCoalesceObjectProtocol.h>

@class NSString;

@interface BCSCoalesceObjectShard : NSObject <BCSCoalesceObjectProtocol> {

	NSString* _coalesceKey;
	/*^block*/id _shardCompletionBlock;

}

@property (nonatomic,copy,readonly) id shardCompletionBlock;              //@synthesize shardCompletionBlock=_shardCompletionBlock - In the implementation block
@property (nonatomic,readonly) NSString * coalesceKey;                    //@synthesize coalesceKey=_coalesceKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)completionBlock;
-(NSString *)coalesceKey;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 coalesceKey:(id)arg2 ;
-(id)shardCompletionBlock;
@end

