/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSHorizontalScrollFailureRecognizerSettings : PTSettings {

	BOOL _enabled;
	BOOL _viewDebugArea;
	unsigned long long _maxAllowableVerticalOffset;
	double _topAngle;
	double _bottomAngle;

}

@property (assign,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL viewDebugArea;                                         //@synthesize viewDebugArea=_viewDebugArea - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowableVerticalOffset;              //@synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset - In the implementation block
@property (assign,nonatomic) double topAngle;                                            //@synthesize topAngle=_topAngle - In the implementation block
@property (assign,nonatomic) double bottomAngle;                                         //@synthesize bottomAngle=_bottomAngle - In the implementation block
+(id)settingsControllerModule;
-(BOOL)enabled;
-(void)setDefaultValues;
-(void)setBottomAngle:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(double)topAngle;
-(double)bottomAngle;
-(void)setMaxAllowableVerticalOffset:(unsigned long long)arg1 ;
-(BOOL)viewDebugArea;
-(void)setTopAngle:(double)arg1 ;
-(unsigned long long)maxAllowableVerticalOffset;
@end

