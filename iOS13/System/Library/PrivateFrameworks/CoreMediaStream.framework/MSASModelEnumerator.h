/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MSASModelEnumerator : NSEnumerator {

	sqlite3Ref _db;
	sqlite3_stmtRef _stmt;
	/*^block*/id _stepBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) sqlite3Ref db;                                   //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef stmt;                            //@synthesize stmt=_stmt - In the implementation block
@property (nonatomic,copy) id stepBlock;                                      //@synthesize stepBlock=_stepBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)enumeratorWithDatabase:(sqlite3Ref)arg1 query:(id)arg2 stepBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)nextObject;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(sqlite3_stmtRef)stmt;
-(id)initWithDatabase:(sqlite3Ref)arg1 query:(id)arg2 stepBlock:(/*^block*/id)arg3 ;
-(void)setStmt:(sqlite3_stmtRef)arg1 ;
-(id)stepBlock;
-(void)setStepBlock:(id)arg1 ;
@end

