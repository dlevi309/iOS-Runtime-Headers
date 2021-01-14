/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticParameterCurve : NSObject {

	NSMutableArray* _curve;

}

@property (nonatomic,retain) NSMutableArray * curve;              //@synthesize curve=_curve - In the implementation block
-(NSMutableArray *)curve;
-(void)setCurve:(NSMutableArray *)arg1 ;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end

