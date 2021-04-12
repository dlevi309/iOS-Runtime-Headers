/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFreeformPointerSettings.h>

@interface _UIBeamPointerSettings : _UIFreeformPointerSettings {

	double _minLength;
	double _maxLength;
	double _maxSnapLength;
	double _width;

}

@property (assign,nonatomic) double minLength;                  //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) double maxLength;                  //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) double maxSnapLength;              //@synthesize maxSnapLength=_maxSnapLength - In the implementation block
@property (assign,nonatomic) double width;                      //@synthesize width=_width - In the implementation block
+(id)settingsControllerModule;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(double)minLength;
-(void)setDefaultValues;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
-(void)setMinLength:(double)arg1 ;
-(void)setMaxSnapLength:(double)arg1 ;
-(double)maxSnapLength;
@end

