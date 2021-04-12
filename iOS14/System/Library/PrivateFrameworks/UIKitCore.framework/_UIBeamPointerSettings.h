/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDefaultValues;
-(double)width;
-(void)setMinLength:(double)arg1 ;
-(double)maxLength;
-(void)setWidth:(double)arg1 ;
-(void)setMaxSnapLength:(double)arg1 ;
-(double)maxSnapLength;
-(double)minLength;
-(void)setMaxLength:(double)arg1 ;
@end

