/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSString, NSSet;

@interface NFEventTrigger : NSObject {

	BOOL _fireOnce;
	BOOL _fireOnAny;
	NSString* _key;
	NSSet* _events;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSSet * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) id block;                         //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) BOOL fireOnce;                    //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL fireOnAny;                   //@synthesize fireOnAny=_fireOnAny - In the implementation block
-(id)block;
-(id)initWithKey:(id)arg1 fireOnce:(BOOL)arg2 fireOnAny:(BOOL)arg3 events:(id)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)fireOnAny;
-(NSString *)key;
-(NSSet *)events;
-(BOOL)fireOnce;
@end

