/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(void)setMaxAllowableVerticalOffset:(unsigned long long)arg1 ;
-(void)setTopAngle:(double)arg1 ;
-(void)setBottomAngle:(double)arg1 ;
-(BOOL)viewDebugArea;
-(unsigned long long)maxAllowableVerticalOffset;
-(double)topAngle;
-(double)bottomAngle;
@end

