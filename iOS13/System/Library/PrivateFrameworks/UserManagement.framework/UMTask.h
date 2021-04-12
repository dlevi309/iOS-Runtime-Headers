/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)name;
-(NSString *)reason;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isFinished;
-(NSUUID *)uuid;
-(NSString *)bundleID;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)end;
-(void)begin;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setReason:(NSString *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
@end

