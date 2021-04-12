/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying> {

	long long _timerMode;
	double _sampleInterval;
	double _warnInterval;
	double _totalInterval;
	double _quickUnwarnInterval;

}

@property (assign,nonatomic) long long timerMode;                       //@synthesize timerMode=_timerMode - In the implementation block
@property (assign,nonatomic) double sampleInterval;                     //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (assign,nonatomic) double warnInterval;                       //@synthesize warnInterval=_warnInterval - In the implementation block
@property (assign,nonatomic) double quickUnwarnInterval;                //@synthesize quickUnwarnInterval=_quickUnwarnInterval - In the implementation block
@property (assign,nonatomic) double totalInterval;                      //@synthesize totalInterval=_totalInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldWarn; 
@property (nonatomic,readonly) BOOL shouldExpireAfterWarn; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(double)sampleInterval;
-(void)setSampleInterval:(double)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)shouldExpireAfterWarn;
-(void)setTotalInterval:(double)arg1 ;
-(id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3 ;
-(double)totalInterval;
-(BOOL)shouldWarn;
-(NSString *)description;
-(double)quickUnwarnInterval;
-(void)setTimerMode:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setWarnInterval:(double)arg1 ;
-(double)warnInterval;
-(void)setQuickUnwarnInterval:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)timerMode;
-(BOOL)isEqual:(id)arg1 ;
@end

