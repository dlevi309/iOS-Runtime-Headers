/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableDictionary, _DKSyncContext;

@interface _DKSyncContextObjectFactory : NSObject {

	NSMutableDictionary* _instances;
	_DKSyncContext* _context;
	Class _class;

}

@property (nonatomic,readonly) _DKSyncContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) Class class;                           //@synthesize class=_class - In the implementation block
+(id)objectFactoryForClass:(Class)arg1 context:(id)arg2 ;
-(Class)class;
-(id)instance;
-(_DKSyncContext *)context;
-(id)initWithContext:(id)arg1 fabricateClass:(Class)arg2 ;
@end

