/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKAxisLabelStyle, NSString;

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying> {

	BOOL _leftOfSeries;
	HKAxisLabelStyle* _labelStyle;
	NSString* _localizedLabelKey;

}

@property (nonatomic,copy) HKAxisLabelStyle * labelStyle;              //@synthesize labelStyle=_labelStyle - In the implementation block
@property (nonatomic,copy) NSString * localizedLabelKey;               //@synthesize localizedLabelKey=_localizedLabelKey - In the implementation block
@property (assign,nonatomic) BOOL leftOfSeries;                        //@synthesize leftOfSeries=_leftOfSeries - In the implementation block
+(id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(BOOL)arg3 ;
-(HKAxisLabelStyle *)labelStyle;
-(void)setLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)leftOfSeries;
-(NSString *)localizedLabelKey;
-(void)setLeftOfSeries:(BOOL)arg1 ;
-(void)setLocalizedLabelKey:(NSString *)arg1 ;
@end

