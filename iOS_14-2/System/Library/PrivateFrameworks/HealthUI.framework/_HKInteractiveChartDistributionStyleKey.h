/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying> {

	long long _style;
	long long _timeScope;
	NSString* _predicateName;

}

@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long timeScope;                   //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,retain) NSString * predicateName;              //@synthesize predicateName=_predicateName - In the implementation block
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(unsigned long long)hash;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDistributionStyle:(long long)arg1 timeScope:(long long)arg2 predicateName:(id)arg3 ;
-(NSString *)predicateName;
-(void)setPredicateName:(NSString *)arg1 ;
@end

