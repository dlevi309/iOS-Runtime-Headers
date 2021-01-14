/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NSString;

@interface FMStopwatch : NSObject {

	NSString* _label;
	NSString* _comment;
	unsigned long long _startTime;
	unsigned long long _endTime;

}

@property (nonatomic,copy) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long endTime;                //@synthesize endTime=_endTime - In the implementation block
+(void)initialize;
+(void)dumpBuffer:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 comment:(id)arg2 ;
+(id)illegalLabelCharacterSet;
+(id)stopwatchWithLabel:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)stop;
-(id)description;
-(void)setEndTime:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)endTime;
-(unsigned long long)startTime;
-(NSString *)label;
-(id)descriptionAsData;
-(void)stopWithComment:(id)arg1 ;
@end

