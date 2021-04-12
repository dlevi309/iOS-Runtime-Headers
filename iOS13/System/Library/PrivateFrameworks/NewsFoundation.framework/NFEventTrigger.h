/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(id)block;
-(NSSet *)events;
-(id)initWithKey:(id)arg1 fireOnce:(BOOL)arg2 fireOnAny:(BOOL)arg3 events:(id)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)fireOnce;
-(BOOL)fireOnAny;
@end

