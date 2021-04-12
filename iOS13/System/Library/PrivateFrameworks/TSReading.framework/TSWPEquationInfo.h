/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDDrawableInfo.h>

@class EQKitEquation;

@interface TSWPEquationInfo : TSDDrawableInfo {

	EQKitEquation* _equation;

}

@property (nonatomic,retain) EQKitEquation * equation;              //@synthesize equation=_equation - In the implementation block
-(void)dealloc;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 mathMLNode:(xmlNode*)arg2 fromXMLDoc:(xmlDoc*)arg3 ;
-(EQKitEquation *)equation;
-(void)setEquation:(EQKitEquation *)arg1 ;
@end

