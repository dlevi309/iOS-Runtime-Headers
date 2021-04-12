/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@class NSMutableArray;

@interface ADTimeProfiler : NSObject {

	NSMutableArray* _logArray;

}

@property (nonatomic,retain) NSMutableArray * logArray;              //@synthesize logArray=_logArray - In the implementation block
-(void)start:(id)arg1 ;
-(id)init;
-(id)log;
-(NSMutableArray *)logArray;
-(unsigned long long)currentTime;
-(void)stop:(id)arg1 ;
-(void)reset;
-(void)setLogArray:(NSMutableArray *)arg1 ;
-(void)startForOperationWithName:(id)arg1 ;
-(void)stopForOperationWithName:(id)arg1 ;
-(id)valueDictForOperationName:(id)arg1 ;
-(void)printLog;
-(id)stringLog;
@end

