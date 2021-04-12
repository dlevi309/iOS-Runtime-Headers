/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@class NSMutableArray;

@interface ADTimeProfiler : NSObject {

	NSMutableArray* _logArray;

}

@property (nonatomic,retain) NSMutableArray * logArray;              //@synthesize logArray=_logArray - In the implementation block
-(id)init;
-(void)reset;
-(id)log;
-(unsigned long long)currentTime;
-(void)start:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(NSMutableArray *)logArray;
-(void)setLogArray:(NSMutableArray *)arg1 ;
-(void)startForOperationWithName:(id)arg1 ;
-(void)stopForOperationWithName:(id)arg1 ;
-(id)valueDictForOperationName:(id)arg1 ;
-(void)printLog;
-(id)stringLog;
@end

