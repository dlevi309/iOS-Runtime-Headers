/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setLeftOfSeries:(BOOL)arg1 ;
-(void)setLocalizedLabelKey:(NSString *)arg1 ;
-(HKAxisLabelStyle *)labelStyle;
-(NSString *)localizedLabelKey;
-(BOOL)leftOfSeries;
@end

