/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSObject, NSString;

@interface TSUKVOToken : NSObject {

	NSObject* _observer;
	NSObject* _target;
	NSString* _keyPath;
	void* _context;

}

@property (nonatomic,readonly) NSObject * observer;                  //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject * target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) void* context;                        //@synthesize context=_context - In the implementation block
-(id)init;
-(NSObject *)observer;
-(void*)context;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(NSObject *)target;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void*)arg4 ;
@end

