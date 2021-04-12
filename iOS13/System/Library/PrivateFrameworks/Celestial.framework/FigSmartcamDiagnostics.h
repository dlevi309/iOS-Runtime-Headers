/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface FigSmartcamDiagnostics : NSObject {

	NSMutableDictionary* _metadata;

}
-(id)init;
-(id)metadata;
-(BOOL)addMotionStats:(SCD_Struct_Fi120)arg1 ;
-(void)addSceneConfidences:(id)arg1 ;
-(void)addPAMDecisionPreliminary:(id)arg1 ;
-(BOOL)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3 ;
@end

