/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)timerMode;
-(void)setTimerMode:(long long)arg1 ;
-(double)sampleInterval;
-(double)totalInterval;
-(void)setTotalInterval:(double)arg1 ;
-(id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3 ;
-(void)setWarnInterval:(double)arg1 ;
-(void)setQuickUnwarnInterval:(double)arg1 ;
-(void)setSampleInterval:(double)arg1 ;
-(double)warnInterval;
-(BOOL)shouldWarn;
-(double)quickUnwarnInterval;
-(BOOL)shouldExpireAfterWarn;
@end

