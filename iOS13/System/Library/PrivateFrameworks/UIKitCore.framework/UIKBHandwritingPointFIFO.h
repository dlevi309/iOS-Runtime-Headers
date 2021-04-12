/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(UIKBHandwritingPointFIFO *)nextFIFO;
-(void)addPoint:(SCD_Struct_UI88)arg1 ;
-(void)emitPoint:(SCD_Struct_UI88)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg1 ;
@end

