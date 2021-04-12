/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTPointSettings : PTSettings {

	double _x;
	double _y;

}

@property (assign,x,nonatomic) double x;                      //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                      //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) CGPoint pointValue; 
+(BOOL)ignoresKey:(id)arg1 ;
+(id)settingsControllerModule;
-(double)x;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(id)drillDownSummary;
-(CGPoint)pointValue;
-(void)setPointValue:(CGPoint)arg1 ;
@end

