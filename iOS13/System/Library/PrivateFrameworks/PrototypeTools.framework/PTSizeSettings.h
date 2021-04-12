/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
-(CGSize)sizeValue;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)drillDownSummary;
-(void)setSizeValue:(CGSize)arg1 ;
@end

