/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTInvocationDispatcher, NewMSPQuery;

@interface RTMapsSupportQueryState : NSObject {

	BOOL _loaded;
	unsigned long long _type;
	RTInvocationDispatcher* _dispatcher;
	NewMSPQuery* _query;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTInvocationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                        //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) NewMSPQuery * query;                                //@synthesize query=_query - In the implementation block
+(id)queryTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)type;
-(NewMSPQuery *)query;
-(void)setQuery:(NewMSPQuery *)arg1 ;
-(BOOL)loaded;
-(RTInvocationDispatcher *)dispatcher;
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 dispatcher:(id)arg2 ;
@end

