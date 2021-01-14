/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/


@interface AlgosConnectionScore : NSObject {

	void* connectionData;
	BOOL _debug;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) BOOL debug;                              //@synthesize debug=_debug - In the implementation block
+(id)connectionScore;
-(id)init;
-(void)setDebug:(BOOL)arg1 ;
-(unsigned long long)count;
-(BOOL)debug;
-(void)dealloc;
-(void)addConnectionRow:(unsigned long long)arg1 ttfb:(double)arg2 ttlb:(double)arg3 basettfb:(double)arg4 basettlb:(double)arg5 weight:(double)arg6 failed:(int)arg7 ;
-(id)scoreConnection:(BOOL)arg1 label:(id)arg2 ;
-(void)clearConnectionRows;
@end

