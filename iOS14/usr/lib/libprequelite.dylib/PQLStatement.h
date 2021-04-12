/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libprequelite.dylib
*/


#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
@class NSMutableArray;

@interface PQLStatement : NSObject {

	sqlite3_stmtRef _stmt;
	PQLStatement* _next;
	NSMutableArray* _aliveBinds;
	/*^block*/id _profilingHook;
	SCD_Union_PQ4* _specUnion;
	BOOL _inUse;
	BOOL _isTraced;
	short _specLength;

}

@property (nonatomic,readonly) BOOL isTraced; 
-(void)bindFromArray:(id)arg1 db:(id)arg2 ;
-(void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2 ;
-(BOOL)isTraced;
-(id)description;
-(BOOL)_prepare:(const char*)arg1 withDB:(id)arg2 ;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 db:(id)arg3 cache:(cache_sRef)arg4 ;
-(id)initWithQueryBuilder:(/*^block*/id)arg1 db:(id)arg2 cache:(cache_sRef)arg3 ;
-(void)invalidate;
-(void)keepBindAlive:(id)arg1 ;
-(id)translate:(id)arg1 withBuilder:(id)arg2 ;
-(void)bindArguments:(char*)arg1 db:(id)arg2 ;
-(id)initWithStatement:(id)arg1 forDB:(id)arg2 ;
-(id)translate:(id)arg1 hasInjections:(BOOL*)arg2 arguments:(char*)arg3 ;
-(void)dealloc;
@end

