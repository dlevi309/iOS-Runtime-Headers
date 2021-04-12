/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@protocol OS_os_log;
@class NSMutableDictionary, NSMutableArray, Caller, NSDate, NSObject;

@interface Request : NSObject {

	NSMutableDictionary* _cachedValues;
	NSMutableArray* _heldObjects;
	BOOL _interactive;
	unsigned _identifier;
	Caller* _caller;
	NSDate* _received;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) Caller * caller;                     //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) NSDate * received;                   //@synthesize received=_received - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                    //@synthesize interactive=_interactive - In the implementation block
+(id)current;
+(id)requestFromCurrentConnection;
+(id)requestFromConnection:(id)arg1 event:(id)arg2 ;
-(void)dealloc;
-(unsigned)identifier;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)interactive;
-(Caller *)caller;
-(NSDate *)received;
-(id)cachedValue:(long long)arg1 object:(id)arg2 error:(id*)arg3 readValueBlock:(/*^block*/id)arg4 ;
-(id)initWithCaller:(id)arg1 ;
-(id)_complexIdentifier:(long long)arg1 object:(id)arg2 ;
-(void)_invalidateCachedValue:(id)arg1 identifier:(id)arg2 ;
-(id)cachedValue:(long long)arg1 error:(id*)arg2 readValueBlock:(/*^block*/id)arg3 ;
-(void)holdObject:(id)arg1 ;
@end

