/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@class NSString, NSUUID;

@interface UMTask : NSObject {

	BOOL _isFinished;
	int _pid;
	NSString* _name;
	NSString* _reason;
	NSString* _bundleID;
	NSUUID* _uuid;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) int pid;                        //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
+(id)taskWithName:(id)arg1 reason:(id)arg2 ;
+(id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3 ;
-(NSUUID *)uuid;
-(void)end;
-(int)pid;
-(void)begin;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isFinished;
-(NSString *)name;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
@end

