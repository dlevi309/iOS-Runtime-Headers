/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSCoalesceHelperProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol> {

	NSMutableDictionary* _coalesceObjectPool;
	NSObject*<OS_dispatch_queue> _coalesceHelperDispatchQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * coalesceObjectPool;                              //@synthesize coalesceObjectPool=_coalesceObjectPool - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> coalesceHelperDispatchQueue;              //@synthesize coalesceHelperDispatchQueue=_coalesceHelperDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)coalesceHelperDispatchQueue;
-(NSMutableDictionary *)coalesceObjectPool;
-(void)_enqueueCoalesceObject:(id)arg1 isDuplicateRequest:(BOOL*)arg2 inCoalesceObjectPool:(id)arg3 ;
-(id)_dequeueCoalesceObjectsForCoalesceKey:(id)arg1 inCoalesceObjectPool:(id)arg2 ;
-(void)enqueueCoalesceObject:(id)arg1 isDuplicateRequest:(BOOL*)arg2 ;
-(id)dequeueCoalesceObjectsForCoalesceKey:(id)arg1 ;
-(id)initWithQOSClass:(unsigned)arg1 ;
@end

