/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface FigSmartcamDiagnostics : NSObject {

	NSMutableDictionary* _metadata;

}
-(void)addPAMDecisionPreliminary:(id)arg1 ;
-(BOOL)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3 ;
-(id)init;
-(BOOL)addMotionStats:(SCD_Struct_Fi119)arg1 ;
-(id)metadata;
-(void)addSceneConfidences:(id)arg1 ;
@end

