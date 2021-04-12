/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHClockIconVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _secondHandTailLength;
	double _hourMinuteHandCenterRadius;
	double _secondHandCenterRadius;
	CGSize _hourHandSize;
	CGSize _minuteHandSize;
	CGSize _secondHandSize;

}

@property (assign,nonatomic) CGSize hourHandSize;                            //@synthesize hourHandSize=_hourHandSize - In the implementation block
@property (assign,nonatomic) CGSize minuteHandSize;                          //@synthesize minuteHandSize=_minuteHandSize - In the implementation block
@property (assign,nonatomic) CGSize secondHandSize;                          //@synthesize secondHandSize=_secondHandSize - In the implementation block
@property (assign,nonatomic) double secondHandTailLength;                    //@synthesize secondHandTailLength=_secondHandTailLength - In the implementation block
@property (assign,nonatomic) double hourMinuteHandCenterRadius;              //@synthesize hourMinuteHandCenterRadius=_hourMinuteHandCenterRadius - In the implementation block
@property (assign,nonatomic) double secondHandCenterRadius;                  //@synthesize secondHandCenterRadius=_secondHandCenterRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSecondHandTailLength:(double)arg1 ;
-(void)setHourHandSize:(CGSize)arg1 ;
-(void)setMinuteHandSize:(CGSize)arg1 ;
-(void)setSecondHandSize:(CGSize)arg1 ;
-(void)setHourMinuteHandCenterRadius:(double)arg1 ;
-(void)setSecondHandCenterRadius:(double)arg1 ;
-(double)hourMinuteHandCenterRadius;
-(double)secondHandCenterRadius;
-(CGSize)hourHandSize;
-(CGSize)minuteHandSize;
-(CGSize)secondHandSize;
-(double)secondHandTailLength;
@end

