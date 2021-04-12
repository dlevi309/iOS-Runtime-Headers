/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
-(CGPoint)pointValue;
-(double)x;
-(double)y;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(id)drillDownSummary;
-(void)setPointValue:(CGPoint)arg1 ;
@end

