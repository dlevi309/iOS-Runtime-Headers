/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings {

	double _width;
	double _height;

}

@property (assign,nonatomic) double width;                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) CGSize sizeValue; 
+(BOOL)ignoresKey:(id)arg1 ;
+(id)settingsControllerModule;
-(void)setHeight:(double)arg1 ;
-(double)width;
-(CGSize)sizeValue;
-(id)drillDownSummary;
-(void)setWidth:(double)arg1 ;
-(double)height;
-(void)setSizeValue:(CGSize)arg1 ;
@end

