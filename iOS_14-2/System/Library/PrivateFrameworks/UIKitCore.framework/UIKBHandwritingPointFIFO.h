/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI98)arg1 ;
-(void)emitPoint:(SCD_Struct_UI98)arg1 ;
-(void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg1 ;
-(UIKBHandwritingPointFIFO *)nextFIFO;
-(id)initWithFIFO:(id)arg1 ;
@end

