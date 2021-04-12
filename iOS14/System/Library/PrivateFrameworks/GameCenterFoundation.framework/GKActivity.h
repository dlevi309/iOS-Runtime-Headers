/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol OS_os_activity;
@class NSString, NSObject;

@interface GKActivity : NSObject {

	unsigned _mode;
	NSString* _name;
	NSObject*<OS_os_activity> _parent;
	NSObject*<OS_os_activity> _activity;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
+(void)execute:(/*^block*/id)arg1 ;
+(id)detached;
+(id)activity;
+(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
+(id)currentOrNew;
+(id)named:(id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(unsigned)mode;
-(NSObject*<OS_os_activity>)parent;
-(void)createActivity;
-(NSObject*<OS_os_activity>)activity;
-(void)setMode:(unsigned)arg1 ;
-(void)setParent:(NSObject*<OS_os_activity>)arg1 ;
-(NSString *)name;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)child;
-(id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned)arg3 ;
-(id)named:(id)arg1 ;
@end

