/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSObject;

@interface SDTraceItem : NSObject <NSCopying> {

	double _startTime;
	long long _identifier;
	double _duration;
	NSString* _label;
	NSObject* _data;
	NSString* _string;

}

@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * string;                 //@synthesize string=_string - In the implementation block
+(void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3 ;
+(id)stringFromReferenceDate:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setData:(NSObject *)arg1 ;
-(id)description;
-(NSObject *)data;
-(NSString *)string;
-(void)setIdentifier:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(long long)identifier;
-(void)setString:(NSString *)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(NSString *)label;
@end

