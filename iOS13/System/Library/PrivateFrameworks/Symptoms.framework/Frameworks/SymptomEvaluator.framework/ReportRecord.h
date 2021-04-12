/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString;

@interface ReportRecord : NSObject {

	long long _count;
	double _lastSeen;
	NSString* _keyString;

}

@property (assign,nonatomic) long long count;                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double lastSeen;                   //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,retain) NSString * keyString;              //@synthesize keyString=_keyString - In the implementation block
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(NSString *)keyString;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(void)setKeyString:(NSString *)arg1 ;
@end

